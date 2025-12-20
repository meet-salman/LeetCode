class Solution {
public:
    vector<int> countBits(int n) {

        vector<int> vec;
        for (int i = 0; i <= n; i++) {
            int n = i, count = 0;
            while (n > 0) {
                n = n & (n - 1);
                count++;
            }
            vec.push_back(count);
        }
        return vec;
    }
};