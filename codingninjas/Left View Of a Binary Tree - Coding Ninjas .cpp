// https://www.codingninjas.com/studio/problems/left-view-of-a-binary-tree_920519?leftPanelTabValue=SUBMISSION



#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

vector<int> getLeftView(TreeNode<int> *root)
{
    bool freq[3005]={false};
    queue< pair<TreeNode<int>*,int >> q;
    if(root) q.push({root,1});

    vector<int> v;

    while(!q.empty()){
         pair<TreeNode<int>*,int > pr=q.front();
         q.pop();
         TreeNode<int>* node =pr.first;
        int level=pr.second;

         if(freq[level]==false){
        v.push_back(node->data);
        freq[level]=true;
    }

    //    Write your code here
    if(node->left){
            q.push({node->left,level+1});
        }
        if(node->right){
            q.push({node->right,level+1});
        }
    }

   

    return  v;
}
