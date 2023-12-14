class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int gmax=INT_MIN,lmax=1,n=nums.size();
        for(auto& x:nums){
            if(lmax==0) lmax=1;       
            lmax*=x;
            if(lmax>gmax) gmax=lmax;
        }
        lmax=1;
        for(int i=n-1;i>=0;--i){
            if(lmax==0) lmax=1;       
            lmax*=nums[i];
            if(lmax>gmax) gmax=lmax;
        }
        return gmax;
    }
};
