class Solution {
public:
    bool isPossible(vector<int>& nums) {
       unordered_map<int,int>mp,mp1;//]++;//denotes no of frq for all element aslo chech how much jamaana
        for(auto &it :nums) mp[it ]++;//denotes req for next subsequene;
        for(auto & i:nums){
            if(mp[i]==0)
                continue; //if all occurance are present 
            mp[i]--;
           if(mp1[i-1]>0){ //seeing for sec map if smaller elm of if  va;ue prnt that is can part of it.. if part then decrese it value and put in fre map
               mp1[i-1]--;
               mp1[i]++;
        }
        else if(mp[i+1]!=0 && mp[i+2]!= 0){
            mp[i+1]--;   //checking if more greate prnt if yess make them decrese in number
            mp[i+2]--;
            mp1[i+2]++;
        }
        else{
            return false;
        }
        }
        return true;
    }
};
