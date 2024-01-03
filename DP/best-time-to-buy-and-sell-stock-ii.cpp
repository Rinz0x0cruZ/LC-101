class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int x=0,y=0,a,b;
        for(int i=n-1;i>=0;--i){
            a=max(-prices[i]+x,y);
            b=max(prices[i]+y,x);
            x=b,y=a;
        }
        return a;
    }
};
