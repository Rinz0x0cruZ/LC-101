class Solution {
public:
    void dfs(TreeNode* root,vector<int>& ro){
        if(!root->left && !root->right){ 
            ro.push_back(root->val);
            return;
        }
        if(root->left) dfs(root->left,ro);
        if(root->right) dfs(root->right,ro);
        return;
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> v,vv;
        bool l=0,ll=0;
        if(!root1) l=1;
        if(!root2) ll=1;
        if(l && ll) return true;
        else if(l || ll) return false;
        dfs(root1,v);
        dfs(root2,vv);
        return v==vv;
    }
};
