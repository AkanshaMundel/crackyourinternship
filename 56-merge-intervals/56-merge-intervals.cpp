class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
         vector<vector<int>> ans;
        sort ( intervals.begin(), intervals.end());
        vector<int> v;
        for(int i = 0;i< intervals.size();i++){
            if(ans.empty() || ans.back()[1]<intervals[i][0]){
                v= {
                    intervals[i][0],intervals[i][1]
                };
                 ans.push_back(v);
            }
           
            else{
                 ans.back()[1]= max(ans.back()[1],intervals[i][1]);
            }
        }return ans;
       
    }
};
