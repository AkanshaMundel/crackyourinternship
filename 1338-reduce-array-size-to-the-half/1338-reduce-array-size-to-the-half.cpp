class Solution {
public:
    int minSetSize(vector<int>& arr) {
       multiset<int,greater<int>> s;//decresing order 
        unordered_map<int,int>mp;
        for(int i = 0;i<arr.size();i++){
            mp[arr[i]]++; //storing frequeny in map 
        }
        
        for(auto n:mp){
            s.insert(n.second);
        }
        int size= arr.size();
        int count =0;
        int ans=0;
        for(auto it = s.begin();count*2<size;it++){
            ans++;
            count += *it;
            
        }
        return ans;
    }
};
//3 -4
//5-3
//2-2
//7-1
//sort in decresing order 4,3,2,1 
//make cnt *2<size or say count <= size/2