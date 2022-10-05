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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth ==1){
            TreeNode* newhed = new TreeNode(val);
              newhed ->left = root;
            return newhed;
        }
        int lvl=0;
        queue<TreeNode*>q;
         q.push(root);
        while(!q.empty()){
           lvl++;
            if(lvl== depth-1) break;
            int size= q.size();
            while(size--){
                auto node = q.front();
                q.pop();
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            
        }
        int n = q.size();
        while(n--){
            auto node= q.front();
            q.pop();
            TreeNode* tem1 = new TreeNode(val);
             TreeNode* tem2 = new TreeNode(val);
            tem1->left = node->left;
            tem2->right = node->right;
            node->left = tem1;
            node->right=tem2;
        }
        return root;
    }
};