class Solution {
public:
    vector<vector<int>> dp,mat;
    int n,m;
    int dfs(int i,int j){
        if(i==n-1 && j==m-1) return mat[i][j];
        if(i==n || j==m) return INT_MAX;
        if(dp[i][j]!=-1) return dp[i][j];
        
        int down=dfs(i+1,j);
        int right=dfs(i,j+1);
        
        dp[i][j]=mat[i][j]+min(down,right);
        return dp[i][j];
    }
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        this->n=n,this->m=m;
        this->mat=grid;
        dp.resize(n,vector<int>(m,-1));
        return dfs(0,0);
    }
};
