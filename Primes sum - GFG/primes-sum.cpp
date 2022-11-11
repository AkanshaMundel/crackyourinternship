//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
public:
    string isSumOfTwo(int N){
        vector<bool>primes(N+1,1);
        primes[0]=0, primes[1]=0;
        for(int i = 2; i*i<=N;i++){
            if(primes[i]==1){
                for(int j = i*i;j<=N; j +=i){
                    primes[j]= 0;
                }
            }
        }
        
        
        // code here 
        for(int i = 2; i<=N; i++){ //just moving till n/2 coz sum is near ab n/2 
            if(primes[i]&& primes[N-i]){
                return "Yes";
            }
           
        }
        return "No";
    }
    // bool prime(int n ){
    //     for(int i = 2 ; i <= sqrt(n); i++){
    //         if(n %i ==0) {
    //             return false;
    //         }
           
    //     }
    //      return true;
    // }
};
//tc  n 

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