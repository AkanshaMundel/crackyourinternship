class Solution {
public:
     unordered_map<int,long long>mp;
    unordered_set<int >nums;
    long long fun(int root){
        if(mp.count(root))
            return mp[root];
        
        long long cnt=1;
        for(int i :nums){
            if(root%i==0 && nums.count(root/i)){
                cnt += fun(i)*fun(root/i);
            }       
        }return mp[root]= cnt;
    }
    int numFactoredBinaryTrees(vector<int>& arr) {
        nums.insert(arr.begin(),arr.end());
        long long ans =0;
        for(int i :nums){
            ans += fun(i);
        }
        return int(ans%1000000007);
    }
};