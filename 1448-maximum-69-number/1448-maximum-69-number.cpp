class Solution {
public:
    int maximum69Number(int num) {
        // int largest = num;

        // int prev = 0;
        // int m = 1;
        // while (num != 0) {
        //     int d = num % 10;
        //     int rem = num / 10;
        //     int changed = (rem * 10 + (d == 9 ? 6 : 9)) * m + prev;
        //     prev += d * m;
        //     m *= 10;
        //     num /= 10;

        //     if (changed > largest)
        //         largest = changed;
        // }
        // return largest;

        // --------------------

        string s = to_string(num);

        for (auto& c : s) {
            if (c == '6') {
                c = '9';
                break;
            }
        }
        return stoi(s);
    }
};