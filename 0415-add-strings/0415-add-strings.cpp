#define all(x) (x).begin(), (x).end()

class Solution {
public:
    string solve(string num1, string num2) {
        int n = num1.length();
        int m = num2.length();

        int i = n - 1;
        int j = m - 1;

        int carry = 0;
        string res;

        while (i >= 0 || j >= 0 || carry) {
            int d1 = (i >= 0) ? (num1[i] - '0') : 0;
            int d2 = (j >= 0) ? (num2[j] - '0') : 0;

            int sum = d1 + d2 + carry;
            int dig = sum % 10;
            carry = sum / 10;

            res.push_back(dig + '0');
            i--, j--;
        }

        reverse(all(res));
        return res;
    }

    string addStrings(string num1, string num2) { return solve(num1, num2); }
};

// ----------------------------
// #define all(x) (x).begin(), (x).end()

// class Solution {
// public:
//     string solve(string num1, string num2) {
//         reverse(all(num1));
//         reverse(all(num2));
//         string addition = "";
//         int carry = 0;

//         for (int i = 0; i < (num1.length() > num2.length() ? num1.length()
//                                                            : num2.length());
//              i++) {
//             int d1 = (i < num1.length()) ? (num1[i] - 48) : 0;
//             int d2 = (i < num2.length()) ? (num2[i] - 48) : 0;

//             int sum = d1 + d2 + carry;

//             if (sum >= 10) {
//                 int d = sum % 10;
//                 sum /= 10;
//                 addition += d + '0';
//                 carry = sum;
//             } else {
//                 addition += sum + '0';
//                 carry = 0;
//             }
//         }
//         if (carry)
//             addition += carry + '0';

//         reverse(all(addition));
//         return addition;
//     }

//     string addStrings(string num1, string num2) { return solve(num1, num2); }
// };