class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        int round = minutesToTest/minutesToDie;
        int pig =0;
        while(pow(round+1,pig)<buckets){
            pig++;
        }
        return pig;
    }
};