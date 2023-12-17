class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size(),a=0,b=n*n;
        vector<int> count(b+1,0);
        vector<int> res(2,0);
        
        for(auto& x:grid){
            for(auto& y: x){
                if(count[y]) res[0]=y;
                else a+=y;
                ++count[y];
            }
        }
        res[1]=(b*(b+1))/2;
        res[1]-=a;
        return res;
    }
};
