class Solution {
public:
    //compatater
    bool static sorted(vector<int>&a ,vector<int>&b){
        if(a[0]==b[0]){
            return a[1]>b[1]; //7,10 ;7,9 ; 7,5
        }
        return a[0]<b[0];
    }
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        
        sort(properties.begin(),properties.end(),sorted);
        int ans =0;
        int maxdef = INT_MIN;
        int n = properties.size();
        for(int i = n-1;i>=0;i--){
            if(properties[i][1]<maxdef){ //sorting m start m less attack so just check if yes then add
                ans++; 
            }
            if(properties[i][1]>maxdef){
                maxdef = properties[i][1];
            }
        }
        return ans;
    }
};
//sorting and put weak arrack first wht if have same attack value ?? put larger defence first 