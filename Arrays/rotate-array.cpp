class Solution {
public:
    
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k%=n;
        auto start=nums.begin(),end=nums.end();
        reverse(start,end);
        reverse(start,start+k);
        reverse(start+k,end);
    }
};
