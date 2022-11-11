class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<vector<int>>ans;
        if(n ==1)return intervals;
        sort (intervals.begin(), intervals.end());//sort kr diye acc to start
        vector<int>prev = intervals[0];
        for(int i = 1; i<n ; i++){
            if(intervals[i][0]<= prev[1]){
                prev[1]= max (prev[1], intervals[i][1]);//replacing prev end val to macx of them 
                
            }
            else{
                ans.push_back(prev);
                prev = intervals[i];
            }
        }
        ans.push_back(prev);//if any case last is left then will add 
        return ans;
    }
};