class Solution {
public:
    int mirrorReflection(int p, int q) {
       // using formula is ext*p=ref*n
        int ext =q ;int ref = p;
        while(ext%2==0 && ref%2==0){
            ext/=2;
            ref/=2;
                
        }
        if(ext%2==0 && ref%2!=0)return 0;
        if(ext%2!=0 && ref%2!=0)return 1;
        if(ext%2!=0 && ref%2==0)return 2;
        return -1;
    }
};