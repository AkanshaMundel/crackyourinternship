class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int waterstore = 0;
         //for maxRight we need to store in vector 
         vector <int >maxRight (n,0);
        maxRight[n-1]= height[n-1]; //storing the last ele 
        
        for(int i = n-2; i>=0;i--){
            maxRight[i] = max (maxRight[i+1],height[i] );
        }
         int maxLeft = height[0];
         for(int i = 1; i<n-1;i++){
             int  diff= min (maxLeft , maxRight[i])- height[i];
             if(diff>0){
                 waterstore +=diff; 
             }
              maxLeft = max (maxLeft, height[i]); 
         }
        return waterstore;
    }
};

//tc is o (n ) and sp is o(n) 