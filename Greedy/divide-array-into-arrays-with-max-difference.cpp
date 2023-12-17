#pragma optimize('unroll-loops')
class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        int n=nums.size();
        int j=2;
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        while(j<n){
            int x=nums[j]-nums[j-2];
            if(x<=k){ 
                res.push_back({nums[j-2],nums[j-1],nums[j]});
                j+=3;
            }
            else return {};
        }
        return res;
    }
};
