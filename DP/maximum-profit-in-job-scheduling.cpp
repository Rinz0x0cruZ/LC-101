class Solution {
public:
    vector<vector<int>> tup;
    vector<int> dp;
    
    int binarySearch(int left, int right, int endTime) {
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (tup[mid][0] >= endTime) {
                if (tup[mid - 1][0] >= endTime) {
                    right = mid - 1;
                } else {
                    return mid;
                }
            } else {
                left = mid + 1;
            }
        }
        return left;
    }

    int dfs(int idx, int n) {
        if (idx == n) return 0;
        if (dp[idx] != -1) return dp[idx];

        int nextJob = binarySearch(idx + 1, n - 1, tup[idx][1]);
        int considerCurrent = tup[idx][2] + dfs(nextJob, n);
        int skipCurrent = dfs(idx + 1, n);

        return dp[idx] = max(considerCurrent, skipCurrent);
    }

    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        int n = startTime.size();
        dp.resize(n, -1);
        for (int i = 0; i < n; ++i) {
            tup.push_back({startTime[i], endTime[i], profit[i]});
        }
        sort(tup.begin(), tup.end(), [](const auto& a, const auto& b) {
            return a[0] < b[0];
        });
        return dfs(0, n);
    }
};
