class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int n=s.length(),m=t.length(),count=0;
        string s_="",t_="";
        for(int i=n-1;i>=0;--i){
            if(s[i]=='#') count++;
            else{
                if(count>0) count--;
                else s_+=s[i];
            }
        }
        count=0;
        for(int i=m-1;i>=0;--i){
            if(t[i]=='#') count++;
            else{
                if(count>0) count--;
                else t_+=t[i];
            }
        }
        return s_==t_;
    }
};
