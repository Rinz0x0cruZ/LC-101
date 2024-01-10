class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int xo=0;
        for(auto& x:nums) xo^=x;
        if(xo==k) return 0;
        int ops=0;
        while(xo || k){
            ops+=(xo%2)^(k%2);
            xo/=2;
            k/=2;
        }
        return ops;
        
    }
};
