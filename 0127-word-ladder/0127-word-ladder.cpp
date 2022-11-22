class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        queue<pair<string , int>>q;
        q.push({beginWord,1});
        unordered_set<string>st(wordList.begin(),wordList.end());
        st.erase(beginWord);
        while(!q.empty()){
            string word = q.front().first;
            int step = q.front().second;
            q.pop();
            if(word == endWord)return step;
            for(int i = 0 ; i<word.size();i++){
                char original = word[i]; //storing the the char which gonna change 
                for(char ch = 'a';ch<='z';ch++){
                    word[i]= ch;
                    if(st.find(word)!=st.end()){
                        st.erase(word); //if present in set then remove it so tht no repeat 
                        q.push({word,step+1});
                    }
                }
                word[i]= original;//making back to original so tht nect char gonna chance
                
            }
            
        }
        return 0;
    }
};
//tc is  wordList.size*26*word.size