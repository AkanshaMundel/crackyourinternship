class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //USING POINTER 
        int n = nums.size();
        int i =0;
        for(int j = 1;j<n;j++){
            if(nums[j]!=nums[i]){
                i++; //as only i moving and we getinh unique element
                nums[i]=nums[j];
            }
                
        }
        return i+1;
    }
};