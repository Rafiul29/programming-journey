class Solution {
public:
    bool evaluateTree(TreeNode* root) {
        if(root->val<2) return root->val;
        if(root->val==2){
            return evaluateTree(root->left) or evaluateTree(root->right);
        }
        return evaluateTree(root->left) and evaluateTree(root->right);
    }
};