class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        unordered_map<char,vector<int>> mp;
        for(int i = 0;i<s.length();i++){
            mp[s[i]].push_back(i);
        }
        int n=s.size();
        int count = words.size();
        int c=0;
        for(auto w:words){
            int cur = -1;
            bool ok = false;
            for(auto y:w)
            {
                int l=-1;
                int r = mp[y].size();
                int ind= -1;
                while(r-l>1)
                {
                    int x = l + (r-l)/2;
                    if(cur < mp[y][x])
                    {
                        ind = mp[y][x];
                        r = x;
                    }
                    else l = x;
                }
                if(cur < ind)
                {
                    cur = ind;
                }
                else 
                {
                    ok=1;
                    break;
                }
            }
            c += !ok;
        }
        return c;
 }
};