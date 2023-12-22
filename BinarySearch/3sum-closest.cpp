class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int i,n=nums.size(),curr,diff,x,y,t,td;

        curr=nums[0]+nums[1]+nums[2];
        if(curr>=target) return curr;
        diff=target-curr;

        for(int i=0;i<n-2;++i){
            x=i+1,y=n-1;
            while(x<y){
                t=nums[i]+nums[x]+nums[y];
                td=abs(target-t);
                if(td<diff) curr=t,diff=td;
                
                if(t==target) return t;
                else if(t>target) --y;
                else ++x;
            }
        }
        return curr;
    }
};
