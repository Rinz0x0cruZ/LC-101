class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int curr=arr[0],c=0,n=arr.size(),b=n>>2;
        for(auto& x:arr){
            if(x==curr) ++c;
            else{
                if(c>b) return curr;
                curr=x;
                c=1;
            }
        }
        return curr;
    }
};
