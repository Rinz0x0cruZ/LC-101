class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        if(!root) return {};
        stack<TreeNode*> stk;
        vector<int> res;
        TreeNode* ptr=root;
        while(ptr || !stk.empty()){
            while(ptr){ 
                stk.push(ptr);
                ptr=ptr->left;
            }
            ptr=stk.top();
            stk.pop();
            res.emplace_back(ptr->val);
            ptr=ptr->right;
        }
        return res;
    }
};
