class Solution {
public:
    int minimumTime(int n, vector<vector<int>>& relations, vector<int>& time) {
        vector<vector<int>> list(n);
        vector<int> inDeg(n,0),cTime(n,0);

        for(auto& x:relations){
            list[x[0]-1].push_back(x[1]-1);
            ++inDeg[x[1]-1];
        }
        queue<pair<int,int>> q;
        for(int i=0;i<n;++i) if(inDeg[i]==0) q.push({i,0});

        while(!q.empty()){
            auto [node,t]=q.front();
            q.pop();
            int cT=t+time[node];
            cTime[node]=cT;
            for(int& n:list[node]){
                cTime[n]=max(cTime[n],cT);
                if(!--inDeg[n]) q.push({n,cTime[n]});
            }
        }
        return *max_element(cTime.begin(),cTime.end());
    }
};
