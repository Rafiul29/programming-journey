class Solution {
public:
    int res=0;
    int sum(TreeNode* root){
        if(root==NULL) return 0;
        int l=sum(root->left);
        int r=sum(root->right);
        res+=abs(l-r);
        return l+r+root->val;
    }
    int findTilt(TreeNode* root) {
        sum(root);
        return res;
    }
};