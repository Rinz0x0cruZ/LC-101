class Solution {
public:
    int binaryS(vector<int>& p,int n,int tar){
        if(!n || tar>p[n-1]) return -1;
        int l=0,h=n-1,mid;
        while(l<h){
            mid=l+((h-l)>>1);
            if(p[mid]<tar) l=mid+1;
            else h=mid;
        }
        return l;
    }
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size(),size=0;
        vector<int> piles;
        for(auto& x:nums){
            int r=binaryS(piles,size,x);
            if(r<0){
                piles.push_back(x);
                ++size;
            } else piles[r]=x;
        }
        return size;
    }
};
