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
    bool containine(TreeNode* root){
        if(root ==NULL)return false;
         bool left = containine(root->left);;
         bool right = containine(root->right);
         if(left==NULL) root->left = NULL;
         if(right==NULL ) root->right = NULL; //SAME AS (!RIGHT)
        
        if(root->val ==1 || left ||right ){
            return true;
        }
        return false;
    }
    TreeNode* pruneTree(TreeNode* root) {
        //by recrusive 
        return containine(root)? root:NULL;
    }
};
// tc o(n)
//     sco(n)
//recursive approach