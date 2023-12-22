
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode*> stk;
        if(!root) return {};
        stk.push(root);
        while(!stk.empty()){
            TreeNode* t=stk.top();
            res.emplace_back(t->val);
            stk.pop();
            if(t->right) stk.push(t->right);
            if(t->left) stk.push(t->left);
        }
        return res;
    }
};
