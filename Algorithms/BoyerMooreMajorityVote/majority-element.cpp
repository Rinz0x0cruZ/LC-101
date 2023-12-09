class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ele=nums[0],c=0;
        for(auto& x:nums){
            if(ele==x) ++c;
            else{
                --c;
                if(c==0) ele=x,c=1;
            }
        }
        return ele;
    }
};
