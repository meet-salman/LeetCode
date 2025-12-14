using st_ch = stack<char>;

class Solution {
public:
    bool backspaceCompare(string s, string t) {

        auto i = s.rbegin();
        auto j = t.rbegin();

        int c1 = 0;
        int c2 = 0;
        while (i != s.rend() || j != t.rend()) {
            while (i != s.rend()) {
                if (*i == '#')
                    c1++, i++;
                else if (c1 > 0)
                    c1--, i++;
                else
                    break;
            }

            while (j != t.rend()) {
                if (*j == '#')
                    c2++, j++;
                else if (c2 > 0)
                    c2--, j++;
                else
                    break;
            }

            if (i != s.rend() && j != t.rend()) {
                if (*i != *j)
                    return false;
            } else {
                if (i != s.rend() || j != t.rend())
                    return false;
            }
            if (i != s.rend())
                i++;
            if (j != t.rend())
                j++;
        }
        return true;
    }
};