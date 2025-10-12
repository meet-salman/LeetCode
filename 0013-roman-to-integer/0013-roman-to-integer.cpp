class Solution {
public:
    int romanToInt(string s) {
        map<char, int> hashh{
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000},
    };
        int integer = 0, n = s.size() - 1, val, prev;

        for (int i = n; i >= 0; i--){
            val = hashh[s[i]];

            if (val < prev) integer -= val;
            else integer += val;

            prev = val;
        }
   
    return integer;
    }
};