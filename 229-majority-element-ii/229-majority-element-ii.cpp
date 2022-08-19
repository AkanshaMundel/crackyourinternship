class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       int n = nums.size();
        int num1= -1;
        int num2 = -1;
        int cnt1 = 0;
        int cnt2 = 0;
        for(int i =0;i<n;i++){
            if(nums[i]==num1)cnt1++;
            else if(nums[i]==num2){cnt2++;}
            else if(cnt1==0){
                num1= nums[i];
                cnt1=1;
                
            }
            else if(cnt2==0){
                 num2= nums[i];
                   cnt2=1;
                      }
            else{
                cnt1--;
                cnt2--;
            }
        }
        //find the num1 and num2 now we just count no of time they apper in array 
            vector<int> ans;
             cnt2 =  cnt1=0;
            for(int i =0;i<n;i++){
                if(nums[i]==num1){
                    cnt1++;
                }
                else if(nums[i]==num2){
                      cnt2++;                        
                      
                }
            }
                if(cnt1>n/3){
                    ans.push_back(num1);
                }
                if(cnt2>n/3){
                    ans.push_back(num2);
                }
            
            return ans;
        
    }
};
//sc o(1)