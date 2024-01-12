class Solution {
public:
    bool halvesAreAlike(string s) {
        int n=s.length(),vow=0;
        transform(s.begin(),s.end(),s.begin(),::tolower);
        for(int i=0;i<(n/2);++i){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') ++vow;
        }
        for(int i=n/2;i<n;++i){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') --vow;
        }
        return !vow;

    }
};
