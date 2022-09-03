class Solution {
public:
    vector<int> ans;
     int countdigit (int n ){   //checking if given num is == n like if num ==n so return cnt of digit 
           int cnt =0;
           while(n>0){
               cnt++;
               n =n/10;
           }
             return cnt;
       }
    void fun(int num,int n,int k ){
        if(countdigit(num)==n){ //if got equal then store in ans 
            ans.push_back(num);
            return ;
        }
        for(int i =0;i<=9;i++){
            int lastdig = num%10; //finding last digit 
            if(abs(lastdig-i)==k){ //finding diff 
                 int newno=  num*10+i;//making new no bu adding digit having diff of 7
            fun(newno,n,k);
            }
           
        }
    }
    vector<int> numsSameConsecDiff(int n, int k) {
        
       for(int i =1;i<=9;i++){  //starting from 1 to 9 as first digit 
           fun(i,n,k);   //invoking digit
       }
        return ans;
    }
};