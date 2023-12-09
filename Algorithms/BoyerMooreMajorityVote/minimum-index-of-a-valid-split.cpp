class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        int ele=nums[0],n=nums.size(),c=0,i;
        for(auto& x:nums){
            if(x==ele) ++c;
            else{
                --c;
                if(c==0) ele=x,c=1;
            }
        }
        i=c=0;
        while((c<<1)<=i){
            if(nums[i]==ele) ++c;
            ++i;
        }
        int j=i;
        c=0;
        while(j<n)
            if(nums[j++]==ele) ++c;
        c<<=1,n-=i;
        if(c<=n) return -1;
        return i-1;
    }
};
