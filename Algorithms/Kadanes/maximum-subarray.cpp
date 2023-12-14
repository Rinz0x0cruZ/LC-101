class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int gs=nums[0],x=0;
        for(auto& a:nums){
            if(x<0) x=0;
            x+=a;
            gs=max(gs,x);
        }
        return gs;
    }
};
