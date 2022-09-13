class Solution {
public:
    bool validUtf8(vector<int>& datas) {
        int cnt =0;
        for(auto data:datas){
            if(cnt==0){
                if(data>>5==0b110){
                    cnt=1;
                }
                 else if(data>>4==0b1110){
                    cnt=2;
                }
               else if(data>>3==0b11110){
                    cnt=3;
                }
               
                else if ((data>>7)!=0b0){
                   return false;
                }
            }
            else{
                if((data>>6)!=0b10){
                    return false;
                }
                cnt--;
            }
        }
            if(cnt==0){
                return true;
            }
            return false;
            
        
    }
};