class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=prices[0],prof=0;
        for(auto& x:prices){
            mini=min(x,mini);
            prof=max(prof,x-mini);
        }
        return prof;
    }
};
