class Solution {
public:
    int minRefuelStops(int target, int cur, vector<vector<int>>& stations) {
        int  i =0, rel=0;
        priority_queue<int>pq ; //max queue
       while(cur<target){
            while(i<stations.size() && cur>=stations[i][0]){ //stoing fuel in when its less thn cur fuel and 
                pq.push(stations[i][1]); //storing fuel
                i++;
            }
            if(pq.empty())return -1;
            cur +=pq.top();
            pq.pop();
           rel++;
        }
        return rel;
    }
};
            