using st_ch = stack<char>;

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        st_ch st1, st2;

        for (char& ch : s) {
            if (ch == '#' && !st1.empty())
                st1.pop();
            else if (ch != '#')
                st1.push(ch);
        }
        for (char& ch : t) {
            if (ch == '#' && !st2.empty())
                st2.pop();
            else if (ch != '#')
                st2.push(ch);
        }

        return (st1 == st2);
    }
};