//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:
   int bfs(int n ,int m, int num){
       int cnt =0;//for no. of stepping no
       queue<int> q;
       q.push(num);
       while(!q.empty()){
           int stpno = q.front();
           q.pop();
           if(stpno>=n && stpno<=m){
               cnt++;
           }
           if(stpno>m || num==0){
               continue;
           }
           int lastdig= stpno%10;
           int stepA = stpno*10+(lastdig-1);
           int stepB = stpno*10+(lastdig+1);
           if(lastdig!=0){
               q.push(stepA);
           }
           if(lastdig !=9){
               q.push(stepB);
           }
       }
       return cnt;
   }
    int steppingNumbers(int n, int m)
    {
        // Code Here
        int ans;
      for(int i =0;i<=9;i++){
         ans+= bfs(n,m,i);
      }
      return ans;
    }
   
};


//{ Driver Code Starts.

int main()
{
    Solution obj;
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;
        cout << obj.steppingNumbers(n,m) << endl;
    }
	return 0;
}


// } Driver Code Ends