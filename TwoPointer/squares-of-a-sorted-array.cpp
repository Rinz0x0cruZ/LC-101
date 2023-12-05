class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size(),i=0;
        vector<int> temp,res(n,0);

        for(i=0;i<n && nums[i]<0;++i) 
            temp.push_back(nums[i]*nums[i]);

        int m=temp.size(),j=m-1,x,y,a=0;
        while(i<n && j>=0){
            x=nums[i]*nums[i];
            y=temp[j];
            if(x>y) res[a]=y,--j;
            else res[a]=x,++i;
            ++a;
        }
        while(i<n) res[a++]=nums[i]*nums[i++];
        while(j>=0) res[a++]=temp[j--];
        return res;
    }
};
