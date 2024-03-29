/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
     Node* dfs(Node* node, unordered_map<Node* ,Node*>&mp){
         vector<Node*> neighbors;
         Node* clone = new Node(node->val);
         mp[node]= clone;// addinh clone eid  its node
         for(auto it: node->neighbors){
             if(mp.find(it)!= mp.end()){// arleady clone nd storing in mp
                 neighbors.push_back(mp[it]); //clone from mp to neigh
             }
             else{
                 neighbors.push_back(dfs(it,mp));
             }
         }
         clone->neighbors= neighbors;
         return clone;
         
     }
    Node* cloneGraph(Node* node) {
        unordered_map<Node* ,Node*>mp;
        if(node==NULL) return NULL;
        if(node->neighbors.size()==0){
            Node* clone= new Node(node->val);// if one node present 
        }
        return dfs(node,mp);
    }
};