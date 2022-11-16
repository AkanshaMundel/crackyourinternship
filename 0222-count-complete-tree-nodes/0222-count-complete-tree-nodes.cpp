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
    int countNodes(TreeNode* root) {
         if(root==NULL)return  0;
        int left = 0;
        int right = 0;
        TreeNode *leftN = root;
        TreeNode *rightN = root;
        while(leftN!=NULL){
            left++;
            leftN= leftN->left;
        }
        while(rightN!=NULL){
            right++;
            rightN=rightN->right;
        }
        
        if(left == right) {
        return pow(2,right) - 1;
    
    }
    return countNodes(root->left)+countNodes(root->right)+1;
    }
};