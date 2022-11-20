/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* helper(int i ,int j , int &k, vector<int>& preorder, vector<int>& inorder){
        if(i>j)return NULL;
        k++;
        TreeNode* root = new  TreeNode(preorder[k]);
         //i and j are the starting and ending of inorder 
    //k ispos am in  inorder
      
        int p = i;
        //searching the root in inorder
        while(inorder[p]!=preorder[k]){
            p++;
        }
        //p is position where in u in inorder
        root->left = helper(i,p-1,k,preorder,inorder);
        root->right = helper(p+1,j,k,preorder,inorder);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int k = -1;
        return helper(0,inorder.size()-1,k,preorder,inorder);
    }
};