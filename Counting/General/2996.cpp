class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int i=1,n=nums.size();
        int sum=nums[0];
        vector<bool> v(51,0);
        for(auto& x:nums) v[x]=1;
        while(i<n){
            if(nums[i]!=(nums[i-1]+1)) break;
            else sum+=nums[i];
            ++i;
        }
        while(sum<51 && v[sum]) ++sum;
        return sum;
    }
};
