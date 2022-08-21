class Solution {
public:
    vector<int> movesToStamp(string stamp, string target) {
       int cnt= 0;
        int slen= stamp.length();
        int tlen = target.length();
        vector<bool>visited(tlen,false);
        vector<int>result;
        while(cnt!=tlen){
            bool dischange = false;
            for(int i= 0;i<=tlen-slen;i++){
                if(!visited[i] && canReplace(target,stamp,i)){
                    replace(target,i,slen,cnt);
                    visited[i]= true;
                    dischange=true;
                    result.push_back(i);
                    if(cnt==tlen){
                        break;
                    }
                }
            }
            if(!dischange){
                return{};
            }
        }
        reverse(result.begin(),result.end());
        return result;
    }
    bool canReplace(string &target ,string& stamp ,int idx){
        for(int i = 0;i<stamp.length();i++){
            if(target[idx+i]!='?'&& target[idx+i]!= stamp[i]){
                return false;
            }
        }
        return true;
    }
    void replace(string &target ,int pos, int slen,int &cnt){
        for(int i = 0;i<slen;i++){
            if(target[i+pos]!='?'){
                target[i+pos]='?';
                cnt++;
            }
        }
       
    }
    
};
//TC - O(TLEN+ (TLEN-SLEN))