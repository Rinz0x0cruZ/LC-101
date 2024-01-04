class Solution {
public:
    vector<int> dp;
    int dfs(int idx,int n,vector<int>& nums){
        if(idx==(n-1)) return 0;
        if(dp[idx]!=-1) return dp[idx];
        int res=1e5;
        for(int i=1;i<=nums[idx] && (idx+i)<n;++i){
            res=min(res,1+dfs(idx+i,n,nums));
        }
        return dp[idx]=res;
    }
    int jump(vector<int>& nums) {
        int n=nums.size();
        dp.resize(n,-1);
        return dfs(0,n,nums);
    }
};
