class Solution {
public:
    vector<int> lastVisitedIntegers(vector<string>& words) {
        vector<int> v,res;
        int k=0,n=0;
        for(auto& x:words){ 
            if (x[0]!='p'){  
                v.push_back(stoi(x));
                ++n;
                k=0;
            }
            else{
                ++k;
                if(k<=n) res.push_back(v[(n+1)-k-1]);
                else res.push_back(-1);
            }
        }
        return res;
    }
};
