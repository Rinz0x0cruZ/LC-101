class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi=0,maxj=-1,n=nums.size();
        for(int i=0;i<n;++i) if(nums[i]>nums[maxi]) maxi=i;
        for(int i=0;i<n;++i) if(maxi!=i) maxj=max(nums[i],maxj);
        return (nums[maxi]-1)*(maxj-1);
    }
};
