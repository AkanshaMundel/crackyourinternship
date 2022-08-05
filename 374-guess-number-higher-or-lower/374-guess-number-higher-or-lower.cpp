/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {

       int l =1; 
        int hi = n;
        
        while(l<=hi){
             int mid = l+(hi-l)/2;
           int res = guess(mid);
            if(res ==0) return mid;
            if(res<0) hi = mid-1;
            else  
                l=mid+1;  
        }
        return l;
        
    }
};

