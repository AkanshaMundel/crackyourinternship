//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
	public:
		int NthTerm(int n){
		    // Code  here
		  //  if(n==1)return 2;
		  // NthTerm(n-1)*n+1;
		  long prev = 2;
		  for(int i = 2;i<=n;i++){
		      long  cur= ((prev%1000000007)*i%1000000007)+1;
		      prev= cur;
		  }
		  return (int)prev;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution obj;
		int ans = obj.NthTerm(n);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends