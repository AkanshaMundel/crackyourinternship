class Solution {
public:
      int numMatchingSubseq(string s, vector<string>& words) {
        unordered_map <char, vector<int>> mp;
        for (int i = 0; i < s.size (); i ++) {
            mp[s[i]].push_back (i);
        }
        int ans = 0;
        for (auto it : words) {
            int pos = -1;
            bool flag = 0;
            for (int i = 0; i < it.size (); i ++) {
                auto x = upper_bound (mp[it[i]].begin (), mp[it[i]].end (), pos);
                if (x != mp[it[i]].end ()) {
                    int num = x - mp[it[i]].begin ();
                    pos = mp[it[i]][num];
                }
                else {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
                ans ++;
        }
        return ans;
    }
};

