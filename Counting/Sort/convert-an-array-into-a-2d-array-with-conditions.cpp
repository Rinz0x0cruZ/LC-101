class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        int n=nums.size(),maxi=0;
        vector<int> cnt(n+1,0);
        vector<vector<int>> res;
        for(auto& x:nums){
            ++cnt[x];
            maxi=max(maxi,cnt[x]);
        }
        res.resize(maxi);
        for(int i=1;i<=n;++i){
            int x=cnt[i];
            for(int j=0;j<x;++j) res[j].push_back(i);
        }
        return res;
    }
};
