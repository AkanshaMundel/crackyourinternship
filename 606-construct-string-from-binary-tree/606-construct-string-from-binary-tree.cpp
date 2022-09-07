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
    string tree2str(TreeNode* root) {
         string ans= to_string(root->val);
       
            if(root->left) {
            ans += "("+tree2str(root->left)+")";//checking left 
            }
             if(root->right){
                if(!root->left)ans += "()";//if left not present add right
                 ans += "("+tree2str(root->right)+")";//checking right 
            } 
        
        return ans;
		
    }
};

//tcO(n)scO(n)