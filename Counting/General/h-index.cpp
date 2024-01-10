class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n=citations.size();
        if(n==0) return 0;
        vector<int> h(n+1,0);
        for(auto& x:citations){
            if(x>=n) ++h[n];
            else ++h[x];
        }
        int p=0;
        for(int i=n;i>=0;--i){
            p+=h[i];
            if(p>=i) return i;
        }
        return 0;
    }
};
