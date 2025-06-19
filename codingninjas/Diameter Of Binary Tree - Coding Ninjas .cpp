// https://www.codingninjas.com/studio/problems/diameter-of-the-binary-tree_920552



int mx=0;
int maxHegiht(TreeNode<int> *root){
    if(root==NULL) return 0;
    int l=maxHegiht(root->left);
    int r=maxHegiht(root->right);
    int d=l+r;
    mx=max(mx,d);
    return max(l,r)+1;
}
int diameterOfBinaryTree(TreeNode<int> *root){
	// Write Your Code Here.
    int l=maxHegiht(root->left);
    int r=maxHegiht(root->right);
    int d=l+r;
    return max(mx,d);

}
