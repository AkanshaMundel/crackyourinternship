class Solution {
public:
     void merge(int l,int r,vector<pair<int,int>> &v,vector<int> &count){
         vector<pair<int,int>> dummy(r-l+1);
        int i=l;
        int mid=l+(r-l)/2;
        int j=mid+1;
        int k=0;
        
        while(i<=mid && j<=r){
            if(v[i].first<=v[j].first){
                dummy[k++]=v[j++];
            }
            else{
                count[v[i].second]+=r-j+1;
                dummy[k++]=v[i++];
            }
        }
        
        while(i<=mid){
            dummy[k++]=v[i++];
        }
        
        while(j<=r){
            dummy[k++]=v[j++];
        }
        
        for(int i=l;i<=r;i++){
            v[i]=dummy[i-l];
        }
        
    }
    void mergeSort(int l,int r,vector<pair<int,int>> &v,vector<int> &count){
        
        if(l>=r){
            return;
        }
        
        int mid=l+(r-l)/2;
            
        mergeSort(l,mid,v,count);
        mergeSort(mid+1,r,v,count);
        merge(l,r,v,count);
    
    }
    vector<int> countSmaller(vector<int>& nums) {
        
        int n=nums.size();
        vector<pair<int,int>> v;
        
        for(int i=0;i<n;i++){
            v.push_back({nums[i],i});
        }
        
        vector<int> count(n,0);
        
        mergeSort(0,n-1,v,count);
        
        return count;
    }
};