class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& preq) {
        vector<int> indge(n,0); //cont no of incoming node
        vector<int>adj[n];     //for making directed graph  adjaceny list 
        queue<int>q;
        for(auto it: preq){
            indge[it[0]]++;
            adj[it[1]].push_back(it[0]); //1->0
        }
        int cnt =0;           
        for(int i = 0;i<n;i++){   //if degree ==0 push into queue
          if(indge[i]==0){
              q.push(i);
          }
        }
            while(!q.empty()){
                int v = q.front();
                q.pop();
                cnt++;
                for(auto u :adj[v]){  //all nodes adj of v which is backtrackinh is just decreas
                    if(--indge[u]==0)
                        q.push(u);
                    
                }
            
        }
        if(cnt==n)
            return true;
        return false;
    }
};

//using topology by BFS