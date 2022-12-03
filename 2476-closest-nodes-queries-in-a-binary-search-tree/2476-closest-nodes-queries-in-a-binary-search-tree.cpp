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
   void In(TreeNode* root, vector<int>& v) {
        if(root) {
            In(root->left,v);
            v.push_back(root->val);
            In(root->right,v);
        }
    }
     int lowerbound(vector<int>& v, int q){
         int ans= -1;
         int l = 0;
         int r = v.size()-1;
         while(l<=r){
             int mid = l+(r-l)/2;
             if(v[mid]<=q){
                 ans = max(ans, v[mid]);
                 l = mid+1;
             }
             else{
                 r = mid-1;
             }
         }
         return ans;
     }
    
    int upperbound(vector<int>& v, int q){
       int   ans= INT_MAX;
         int l = 0;
         int r = v.size()-1;
         while(l<=r){
             int mid = l+(r-l)/2;
             if(v[mid]>=q){
                 ans = min(ans, v[mid]);
                 r = mid-1;
             }
             else{
                 l = mid+1;
             }
         }
        if(ans ==   INT_MAX)
            return -1;
         return ans;
     }
    vector<vector<int>> closestNodes(TreeNode* root, vector<int>& queries) {
         vector<int>v;
        In(root,v);
        vector<vector<int>>ans;
         for(int i = 0; i<queries.size(); i++){
             vector<int>temp;
              int lb = lowerbound(v,queries[i]);
             int ub = upperbound(v, queries[i]);
              temp.push_back(lb);
             temp.push_back(ub);
             
             ans.push_back(temp);
         }
         return ans;
     }
    
};