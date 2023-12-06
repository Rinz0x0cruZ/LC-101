class Solution {
public:
    unordered_map<int,int> mp={
        {0,0},
        {1,1},
        {2,3},
        {3,6},
        {4,10},
        {5,15},
        {6,21},
        {7,28},
    };
    int fib(int n){
      return (n*(n+1))>>1;
    }
    int totalMoney(int n) {
        int x=0,rounds=0,rem=n%7;

        if(n>7) rounds=n/7;
        if(rounds>0) x+=(7*fib(rounds-1));

        x+=(mp[7]*rounds);
        x+=(mp[rem]+(rem*rounds));
        
        return x;
    }
};
