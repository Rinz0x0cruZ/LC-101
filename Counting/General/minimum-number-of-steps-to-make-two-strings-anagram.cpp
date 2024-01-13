class Solution {
public:
    int minSteps(string s, string t) {
        int n=s.length()-1;
        vector<int> c(26,0);
        while(n!=-1){
            ++c[s[n]-'a'];
            --c[t[n]-'a'];
            --n;
        }
        n=0;
        for(auto& x:c) if(x>0) n+=x;
        return n;
    }
};
