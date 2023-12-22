class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root) return {};
        queue<TreeNode*> q;
        vector<vector<int>> res;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            vector<int> temp;
            while(n--){
                TreeNode* t=q.front();
                q.pop();
                temp.push_back(t->val);
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
            }
            res.push_back(temp);
        }
        return res;
    }
};
