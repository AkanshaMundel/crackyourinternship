class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k %= nums.size(); //if k value is excred to the size() let say k = 10 size 7 so to get value withint 7 
        reverse(nums.begin(),nums.end());
         reverse(nums.begin(),nums.begin()+k);
         reverse(nums.begin()+k,nums.end());
                

    }
};