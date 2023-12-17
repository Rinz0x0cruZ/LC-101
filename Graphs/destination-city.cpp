int init=[](){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 0;
}();
class Solution {
public:
    unordered_map<string,int> mp;
    string destCity(vector<vector<string>>& paths) {
        for(auto& x:paths){
            string a=x[0],b=x[1];
            mp[a]=1;
            if(mp.count(b)) mp[b]=1;
            else mp[b]=0;
        }
        for(auto& x:mp){
            if(x.second==0) return x.first;
        }
        return "";
    }
};
