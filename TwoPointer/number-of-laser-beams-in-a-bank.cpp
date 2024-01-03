class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n=bank.size(),a=0,b=0,prod=0;
        if(n==1) return 0;  
        for(int i=0;i<n;++i){
            if(b!=0) a=b,b=0;
            for(auto& x:bank[i]) b+=x-'0';
            prod+=a*b;
        }
        return prod;
    }
};
