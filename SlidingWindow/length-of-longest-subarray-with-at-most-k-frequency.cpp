class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int i=0,j=0,n=nums.size(),maxi=0;
        while(j<n){
            int x=nums[j];
            ++mp[x];
            if(mp[x]>k){
                int y;
                while(mp[x]!=k){
                    y=nums[i++];
                    --mp[y];
                }
            }
            maxi=max(maxi,j-i);
            j++;
        }
        return maxi+1;
    }
};
