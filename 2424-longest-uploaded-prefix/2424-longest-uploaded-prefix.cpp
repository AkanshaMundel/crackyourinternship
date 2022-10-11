class LUPrefix {
public:
    vector<int>v;
    LUPrefix(int n) {
        v.resize(n+1,-1);//assign all value to -1
    }
    
    void upload(int video) {
        v[video]= video;
    }
    int i =1;
    int longest() {
     while(i<v.size() && v[i]!=-1) i++;
        if(i ==1)return 0;
        return i-1;//upload largest amang till prefiv 
    }
};

/**
 * Your LUPrefix object will be instantiated and called as such:
 * LUPrefix* obj = new LUPrefix(n);
 * obj->upload(video);
 * int param_2 = obj->longest();
 */