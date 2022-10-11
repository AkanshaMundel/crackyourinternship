class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        //sort(nums.begin(),nums.end());
        if(nums.size()<3) return false; 
        int mid = INT_MAX;
        int low = INT_MAX;
       for(int i = 0;i<nums.size();i++){
         
    
        if(nums[i]>mid) return true;
        else if(nums[i]<low) low=nums[i];
        else if(nums[i]> low and nums[i]<mid) mid=nums[i];
    }
                return false;
    
    }
};


