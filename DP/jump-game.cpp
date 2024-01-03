class Solution {
public:
    vector<int> dp,arr;
    bool dfs(int idx,int n){
        if(idx>=n) return false;
        if(idx==(n-1)) return true;
        if(dp[idx]!=-1) return dp[idx];
        int x=arr[idx];
        bool ans=false;
        while(x){
            ans=ans || dfs(idx+x,n);
            if(ans) return dp[idx]=1;
            --x;
        }
        return dp[idx]=0;
    }
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        dp.resize(n,-1);
        arr=nums;
        return dfs(0,n);
    }
};
