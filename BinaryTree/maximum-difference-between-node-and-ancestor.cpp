class Solution {
public:
    int gmax=0;
    void dfs(TreeNode* root,int mi,int ma){
        if(!root) return;
        int x=max(abs(root->val-mi),abs(ma-root->val));
        gmax=max(x,gmax);
        mi=min(mi,root->val);
        ma=max(ma,root->val);
        dfs(root->left,mi,ma);
        dfs(root->right,mi,ma);
    }
    int maxAncestorDiff(TreeNode* root) {
        dfs(root,root->val,root->val);
        return gmax;
    }
};
