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
void fun(TreeNode<int>* root, vector<int>&ans, int lvl){
        if(root == NULL) return ;
        if(lvl == ans.size()){
            ans.push_back(root->data);
        }
        fun(root->left, ans, lvl+1);
        fun(root->right, ans, lvl+1);
    }
vector<int> getLeftView(TreeNode<int> *root)
{
    vector<int>ans;
    fun(root, ans, 0);
    return ans;
}