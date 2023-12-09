class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        vector<int> count1(101,0),count2(101,0),res(2,0);
        for(auto& x:nums1) ++count1[x];
        for(auto& x:nums2) ++count2[x];
        int a=0,b=0;
        for(auto& x:nums1) if(count2[x]) ++a;
        for(auto& x:nums2) if(count1[x]) ++b;
        res[0]=a,res[1]=b;
        return res;
    }
};
