//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string decodedString(string s){
        // code here
        //using two stack one for no one for string 
        //when encounter the closing bracket pop out nd repeat it nums times
        stack<int>ns;
        stack<string>ss;
        ss.push("#");
        string ans= "";
        
        for(int i =0;i<s.size();i++){
            if(s[i]-'0'>=0 && s[i]-'0'<=9){ //if number
             int cnt=0;
                while(s[i]>='0' && s[i]<='9'){ //if two digit present 
                    cnt = cnt*10+s[i]-'0';
                    i++;
                }
                ns.push(cnt); //adding into stacccccck 
                i--;
            }
            else if(s[i]==']'){
                string temp ="";
                while(!ss.empty() && ss.top()!="["){ //if encounter thr cloding brac
                temp = ss.top() +temp;
                ss.pop();
                    
                }
                //poping last brackrt
                ss.pop();
                ans= temp;
                int n = ns.top();
                ns.pop();
                for(int i =0;i<n-1;i++){
                    ans = ans+temp;
                }
                ss.push(ans);
                
            } 
            else{
                string temp = "";
                temp +=s[i];
                ss.push(temp);
            }
        }
        ans = "";
        while(ss.top() !="#"){
           ans = ss.top() +ans;
           ss.pop();
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}
// } Driver Code Ends