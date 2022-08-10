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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size()== 0)return  NULL;
          return bst(0,nums,nums.size()-1);
    }
       TreeNode* bst(int low,vector<int>& nums,int high){
               if(low>high )return NULL;
                int mid = low+(high-low)/2;
                 TreeNode* node= new TreeNode(nums[mid]);
                 node->left = bst(low,nums,mid-1);
                 node->right = bst(mid+1,nums,high);
          
                return node;
      }
};
