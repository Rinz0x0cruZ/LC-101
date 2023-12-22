class Solution {
public:
    int maxScore(string s) {
        int maxi=0,o=0,z=0,n=s.length();
        for(auto& x:s) if(x=='1') ++o;
        for(int i=0;i<n-1;++i){
            if(s[i]=='0') ++z;
            else --o;
            maxi=max(maxi,z+o);
        }
        return maxi;
    }
};
