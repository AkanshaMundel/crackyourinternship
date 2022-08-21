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
     unordered_map<Node* ,Node*>mp;
    Node* cloneGraph(Node* node) {
        if(node==NULL){
            return NULL;}
    
        if(mp.find(node)==mp.end()){ //not present
            mp[node]= new Node(node->val,{});
            for(auto adj:node->neighbors){ //checkinh its adj if ys then travese same
                mp[node]->neighbors.push_back(cloneGraph(adj));
            }
            
        }
        return mp[node];
    
    }
};

