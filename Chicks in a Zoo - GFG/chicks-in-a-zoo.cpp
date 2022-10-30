//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	long long int NoOfChicks(int n){
	    // Code here
	    long long cnt = 1;//initially cnt 1 on first day 
	    vector<long long >expire(50,0);
	    expire[6]=1;
	    for(int i = 1;i<n;i++){
	        cnt -= expire[i];
	        expire[i+6] += 2*cnt;
	        cnt +=2*cnt;
	    }
	    return cnt;
	}
};
//n =3
// exp[6]=1
// cnt =1;
// for i =1
// cnt = 1+2*1=3

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution obj;
		long long int ans = obj.NoOfChicks(N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends