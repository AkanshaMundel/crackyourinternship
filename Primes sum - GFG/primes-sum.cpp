//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
public:
    string isSumOfTwo(int N){
        // code here 
        for(int i = 2; i<N; i++){ //just moving till n/2 coz sum is near ab n/2 
            if(prime(i)&& prime (N-i)){
                return "Yes";
            }
           
        }
        return "No";
    }
    bool prime(int n ){
        for(int i = 2 ; i <= sqrt(n); i++){
            if(n %i ==0) {
                return false;
            }
           
        }
         return true;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isSumOfTwo(N) << endl;
    }
    return 0;
}

// } Driver Code Ends