class Solution {
public:
    bool backspaceCompare(string s, string t) {
       string s1;
        string s2;
        stack<int>ss1,ss2;
        for(int i = 0;i<s.size();i++){
            if(s[i] == '#' && !ss1.empty())
                ss1.pop();// checking if backspace pop out 
            else if (s[i]!='#')
                ss1.push(s[i]);
            
        }
        for(int i = 0;i<t.size();i++){
            if(t[i]=='#'&& !ss2.empty())
                ss2.pop();
            else if(t[i]!='#')
                ss2.push(t[i]);
            
        }
        while(!ss1.empty()){
            s1.push_back(ss1.top());
            ss1.pop();//remaing element add to string
        }
         while(!ss2.empty()){
            s2.push_back(ss2.top());
             ss2.pop();
        }
        return (s1==s2);
    }
};
//tc l1+l2
//sc n1 +n2
//stack