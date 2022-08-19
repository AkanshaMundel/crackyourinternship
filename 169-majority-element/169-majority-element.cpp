class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0;
        int mele=0;
        for(int i :nums){
            if(cnt==0){
                mele = i;
              
            }
            if(i==mele){
                cnt++;
            }
            else{cnt--;}
        }
        return mele;
    }
};
//Moore’s Voting Algorithm
//sc o(N)