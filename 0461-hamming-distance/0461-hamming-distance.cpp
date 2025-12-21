class Solution {
public:
    int hammingDistance(int x, int y) {
        int res = x^y,
            count = 0;

        while(res>0){
            res &= (res-1);
            count++;
        }
        return count;
    }
};