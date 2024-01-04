static const int _ = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto& x:nums) ++mp[x];
        int ops=0,a;
        for(auto& x:mp){
            a=x.second;
            if(a==1) return -1;
            ops+=(a/3);
            a%=3;
            if(a==1 || a==2) ops+=1;
        }
        return ops;
    }
};
