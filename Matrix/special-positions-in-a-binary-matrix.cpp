class Solution {
public:
    
    int numSpecial(vector<vector<int>>& mat) {
        int n=mat.size(),m=mat[0].size(),raw=0;
        vector<int> cols(m,0);
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                if(mat[i][j]) ++cols[j];
            }
        }
        int x=0,idx;
        for(int i=0;i<n;++i){
            x=0;
            for(int j=0;j<m;++j) if(mat[i][j]) ++x,idx=j;
            if(x==1 && cols[idx]==1) ++raw;
        }
        return raw;
    }
};
