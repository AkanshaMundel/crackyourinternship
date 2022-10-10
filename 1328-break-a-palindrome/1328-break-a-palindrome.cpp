class Solution {
public:
    string breakPalindrome(string palindrome) {
        int n = palindrome.size();
         if(n <=1) return "";
        for(int i =0; i<n/2; i++){
          
            if(palindrome[i]!='a'){
                palindrome[i]='a';//change a to b which is lexical order 
                return palindrome;
            }
           
        }
                //if all element is aaaaa chande last char to b 
                palindrome[n-1]='b';
                 return  palindrome;
            
    }
};