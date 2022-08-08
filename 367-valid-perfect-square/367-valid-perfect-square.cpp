class Solution {
public:
    bool isPerfectSquare(int num) {
        int n = num;
        int l= 1;
        int h =num;
        while(l<=h){
           long long int mid = l +(h-l)/2;
            if(mid*mid==n){
                return true;
            }
            else if(mid *mid<num){
                l=mid+1;
            }
            else 
                h=mid-1;
            
        }
        return false;
    }
};

