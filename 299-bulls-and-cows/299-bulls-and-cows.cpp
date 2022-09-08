class Solution {
public:
    string getHint(string secret, string guess) {
        unordered_map<char,int>mp;
        int b= 0;
        int c=0;
            for(int i = 0;i<secret.size();i++){//ITRATE OVER SECRET IF SAME BULL INCRESE 
                if(secret[i]==guess[i]) b++;
                else{
                    mp[secret[i]]++;  //IF NOT MAKING ,PUTTING  ON MAP WITH COUNT
                }
            }
        //to count no of cows
        for(int i =0;i<secret.size();i++){
            if(secret[i]!=guess[i]){
                if(mp[guess[i]]>0){ //IF CNT >0 IN MAP 
                    c =c+1;
                  
                    mp[guess[i]]--;
                }
            }
        }
        return (to_string(b)+"A"+to_string(c)+"B");
    }
};
//USING HASH TABL E
//TC o(N) SC o(N)