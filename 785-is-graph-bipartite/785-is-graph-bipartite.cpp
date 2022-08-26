class Solution {
public:
    bool hascycle(int i,vector<vector<int>>& graph,vector<int>& color){
            color[i]=1;
        queue<int>q;
        q.push(i);
        while(!q.empty()){
            int node= q.front();
            q.pop();
           
            for(auto it: graph[node]){
                if(color[it]==-1){
                    color[it]= 1-color[node];
                    q.push(it);
                }
                else if(color[it]==color[node]){
                    return false;
                }
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        //BFS
        int n = graph.size();
       vector<int> color(n, -1);
       // memset(color,-1,sizeof(color));
        for(int i =0;i<n;i++){
            if(color[i]==-1){
                
                if(!hascycle(i,graph,color))  return false;
                
            }
        }
        return true;
       
       
    }
};