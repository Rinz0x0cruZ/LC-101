class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        vector<int> rows(n,0),cols(m,0);
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j) if(grid[i][j]) ++rows[i],++cols[j];
        }
        for(int i=0;i<n;++i){
            int zr=n-rows[i],zc;
            for(int j=0;j<m;++j){ 
                zc=m-cols[j];
                grid[i][j]=rows[i]+cols[j]-zr-zc;
            }
        }
        return grid;
    }
};
