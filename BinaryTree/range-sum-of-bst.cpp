class Solution {
public:
    int _ = [] {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        return 0;
    }();
    int rangeSumBST(TreeNode* root, int low, int high) {
       queue<TreeNode*> q;
       q.push(root);
       int sum=0;
       while(!q.empty()){
           TreeNode* t=q.front();
           q.pop();
           if(t->val>=low && t->val<=high) sum+=t->val;
           if(t->left) q.push(t->left);
           if(t->right) q.push(t->right);
       }
       return sum;
    }
};
