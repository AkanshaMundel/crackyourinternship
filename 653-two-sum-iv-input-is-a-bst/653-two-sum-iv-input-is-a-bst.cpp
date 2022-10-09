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
    void funinorder(TreeNode* root,vector<int>& num){
        if(!root) return ;
        funinorder(root->left,num);
        num.push_back(root->val);
        funinorder(root->right,num);
        
            
    }
    bool findtarsorted(vector<int> &num, int k){
        for(int i = 0, j = num.size()-1; i<j;){
            int sum = num[i]+num[j];
            if(sum==k){
                return true;
            }
            else if(sum<k){
                i++;
            }
            else{
                j--;
            }
        }
        return false;
    }
    bool findTarget(TreeNode* root, int k) {
        
        vector<int>num;
        funinorder(root,num);
        return findtarsorted(num,k);//haing store soted ele inorder 
        
    }
};
//0(n )*o(n)