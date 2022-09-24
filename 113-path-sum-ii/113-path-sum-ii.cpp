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
    vector<vector<int>>ans;
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>path;
        fun(root,targetSum,path);
        return ans;
    }
    
    void fun(TreeNode* root, int targetSum,vector <int>path){
        if(root==NULL)return ;
        path.push_back(root->val);
        targetSum -=(root->val);
        if(root->left ==NULL && root->right==NULL){
            if(targetSum ==0){
                ans.push_back(path);
            }
        }
        else{
            fun(root->left,targetSum,path);
            fun(root->right,targetSum,path);
        }
      path.pop_back();
    }
    
    
    
    
};