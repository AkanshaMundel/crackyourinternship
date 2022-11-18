/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool funtofindPath(TreeNode* root ,TreeNode* node,vector<TreeNode*> &res){
        if(root==NULL)return false;
        res.push_back(root);
        if(root->val==node->val)return true;
        if(funtofindPath(root->left ,node, res)||funtofindPath(root->right ,node, res) )return true;//if one of them find return true or els 
        res.pop_back();
        return false;
        
    }
    
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        //using brute force approach 
        //find particular root to node path then check the depest same node value 
        vector<TreeNode*>ans1,ans2;
         funtofindPath(root,p,ans1);
        funtofindPath(root,q,ans2);
        vector<int>a1,a2;
        for(int i = 0; i<ans1.size();i++){
            a1.push_back(ans1[i]->val);
        }
        for(int i = 0; i<ans2.size();i++){
            a2.push_back(ans2[i]->val);
        }
        
        int cnt ;
        int maxi = max(ans1.size(),ans2.size());
        int mini = min(ans1.size(),ans2.size());
        if(ans1[mini -1]->val==ans2[mini-1]->val) return ans1[mini-1];
        for(int i = 0; i<maxi;i++){
            if(a1[i]!=a2[i]){
                cnt = i;
                break;
            }
        }
        TreeNode* finalans= ans1[cnt-1];
        return finalans;
        
    }
};
// tc O(n)for both path 
//  sc isO(n) 