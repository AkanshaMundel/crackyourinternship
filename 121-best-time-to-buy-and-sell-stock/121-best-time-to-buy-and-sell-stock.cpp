class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxpro = 0;
        int minprc =INT_MAX;
    for(int i = 0;i<prices.size();i++){
           minprc = min(minprc,prices[i]);
           int diff= prices[i]- minprc;
        maxpro= max (maxpro,diff);
    }
        return maxpro;
    }
};
//using kadhne algo 
//track the min profit and if diff greter update to maxpro tc O(n) sc O(1)