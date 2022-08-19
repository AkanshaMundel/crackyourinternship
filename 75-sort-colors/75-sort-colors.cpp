class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l = 0;
        int n = nums.size()-1;
        int mid= 0;
        while(mid<= n){
            if(nums[mid]==0){
                swap (nums[l++],nums[mid++]);
            }
            else if(nums[mid]==2){
               swap(nums[mid],nums[n--]); 
            }
            else{
                mid++;
                
            }
        }
    }
};