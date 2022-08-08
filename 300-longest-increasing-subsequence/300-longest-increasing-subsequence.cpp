class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int >li;
        for(int i=0;i<nums.size();i++){
            if(li.empty()||li.back()<nums[i]){ //if last ele of lis is samller than add
                li.push_back(nums[i]);
                
            }else{
                auto it = lower_bound(li.begin(),li.end(),nums[i]); //find just above element of nums[i]
                *it = nums[i];
            }
        }return li.size();
    }
};