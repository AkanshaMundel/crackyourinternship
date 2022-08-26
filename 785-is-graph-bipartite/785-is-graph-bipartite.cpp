class Solution {
public:
    bool hascycle(int node,vector<vector<int>>& graph,vector<int>& color){
               for(auto it: graph[node]){
                    if(color[it]==-1){
                        color[it]= 1-color[node];
                        if(!hascycle(it,graph,color)){ return false;
                    }
                    }
                else if(color[it]==color[node]){
                    return false;
                }
               }
        
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        //DFS
        int n = graph.size();
       vector<int> color(n, -1);
       // memset(color,-1,sizeof(color));
        for(int i =0;i<n;i++){
            if(color[i]==-1){
                color[i]=1;
                if(!hascycle(i,graph,color))  return false;
                
            }
        }
        return true;
       
       
    }
};