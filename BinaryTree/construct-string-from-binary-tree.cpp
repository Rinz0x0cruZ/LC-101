class Solution {
public:
    string tree2str(TreeNode* root) {
        if(!root) return "";
        auto& l=root->left,r=root->right;
        string s=to_string(root->val);
        if(!l && !r) return s;
        s+="("+tree2str(l)+")";
        if(r) s+="("+tree2str(r)+")";
        return s;
    }
};
