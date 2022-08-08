class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        // for(int i = 0;i<arr.size();i++){
        //     if(arr[i]<arr[i+1] && arr[i]>arr[i-1]){
        //         return i;
        //         break;
        //     }
        // }
        // return 0;
        int left = 0;
        while(arr[left]<arr[left+1]) left ++;
        return left;
    }
};

