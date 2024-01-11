class Solution {
public:
    int s=0;
    int rangeSumBST(TreeNode* root, int low, int high) {
        
        if (root == NULL){
            return 0;
        }

        if (root->val >= low && root->val <= high) {
            s += root->val;
        }

        if (root->left){
              rangeSumBST(root->left, low, high);
        }
          
        if (root->right){
             rangeSumBST(root->right, low, high);
        }
           
        return s;
    }
};