class Solution {
public:
    int numberOfMatches(int n) {
        if(n==1) return 0;
        int x=n/2;
        return x + numberOfMatches(n%2==0 ? x : x+1);
    }
};
