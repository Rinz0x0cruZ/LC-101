class Solution {
public:
    map<int,vector<int>> graph;
    map<int,bool> infect;
    void fill(TreeNode* node,int prev){
        if(!node) return;
        if(prev>0){
            graph[prev].push_back(node->val);
            graph[node->val].push_back(prev);
        }
        fill(node->left,node->val);
        fill(node->right,node->val);
    }
    

    int amountOfTime(TreeNode* root, int start) {
        int n=-1;
        fill(root,n);
        queue<int> q;
        n=-1;
        q.push(start);
        while(!q.empty()){
            int s=q.size();
            while(s--){
                int t=q.front();
                q.pop();
                infect[t]=true;
                for(auto& x:graph[t]) 
                    if(infect.count(x)==0) q.push(x);
            }
            ++n;
        }
        return n;
    }
};
