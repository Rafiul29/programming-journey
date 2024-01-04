class Solution {
public:
     bool isUnival(TreeNode* root,int v) {
         if(root==NULL) return true;
         if(root->val!=v) return false;
         return isUnival(root->left,v) && isUnival(root->right,v);
    }
    bool isUnivalTree(TreeNode* root) {
        int v;
        if(root==NULL) return true;
        if(root) v=root->val;
      return isUnival(root,v);
    }
};