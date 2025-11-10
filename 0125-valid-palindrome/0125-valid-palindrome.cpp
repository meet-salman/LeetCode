class Solution {
public:
    bool isPalindrome(string s) {
        int p1 = 0, p2 = s.size() - 1;
        bool is = true;

        while (p1 < p2) {
            char l = s[p1], r = s[p2];

            if (l >= 'A' && l <= 'Z')
                l = 'a' + l - 'A';
            if (r >= 'A' && r <= 'Z')
                r = 'a' + r - 'A';

            if ((l < 'a' || l > 'z') && (l < '0' || l > '9')) {
                p1++;
                continue;
            }
            if ((r < 'a' || r > 'z') && (r < '0' || r > '9')) {
                p2--;
                continue;
            }

            if (l == r) {
                p1++;
                p2--;
            } else {
                is = false;
                break;
            }
        }
        if (p1 == p2)
            return true;

        return is;
    }
};