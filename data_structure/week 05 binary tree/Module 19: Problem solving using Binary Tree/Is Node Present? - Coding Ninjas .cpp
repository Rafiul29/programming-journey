https://www.codingninjas.com/studio/problems/code-find-a-node_5682?leftPanelTabValue=SUBMISSION



************************************************************/
bool isPresent(BinaryTreeNode<int> *root,int x){
    if(root==NULL){
        return false;
    }
    if(root->data==x){
        return true;
    }
   bool l= isPresent(root->left, x);
  bool r=  isPresent(root->right, x);
  return l||r;
  
}

bool isNodePresent(BinaryTreeNode<int> *root, int x) {
    // Write your code here
    return isPresent(root, x);
}