class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string>& paths)
    {   vector<vector<string>> ans;
        unordered_map<string,vector<string>>file;
        for(auto it :paths){
            stringstream ss(it);
            string dic;
            string s;
            getline(ss,dic,' ');
            
            while(getline(ss,s,' ')){
                string filename= dic+'/'+s.substr(0,s.find('('));
                 string filecontent = s.substr(s.find('(')+1,s.find(')')-s.find('(')-1);
                 file[filecontent].push_back(filename);   
                    
                
            }
        }
        for(auto i :file){
            if(i.second.size()>1){
              ans.push_back(i.second);  
            }
        }
     return ans;
    }
};
//we need to find the same content then acc to same content we have to put in dir/path
//separate the path content from string ..
//use map , content as key and put same content, have in  path and text ..
//if there is key count >1 put put in same array ..