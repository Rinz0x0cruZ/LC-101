class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    int countCharacters(vector<string>& words, string chars) {
        vector<int> freq(26,0);
        for(auto& x:chars) ++freq[x-'a'];
        int res=0;
        for(auto& x:words){
            vector<int> f(26,0);
            int n=0;
            for(auto& y:x) ++f[y-'a'],++n;
            int flag=true;
            for(int i=0;i<26;++i){ 
                if(f[i]>freq[i]) {
                    flag=false;
                    break;
                }
            }
            if(flag) res+=n;
        }
        return res;
    }
};
