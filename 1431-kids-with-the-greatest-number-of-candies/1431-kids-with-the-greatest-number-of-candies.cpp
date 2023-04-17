class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
          int n =candies.size();
        int maxi = *max_element(begin(candies), end(candies));

        //adding one to each nd fins max
        vector<bool>res(n,false);
        
        for(int i = 0 ; i<n ; i++){
          if(candies[i]+extraCandies>=maxi){
              res[i]=true;
          }
           
        }
        return res;
    }
};