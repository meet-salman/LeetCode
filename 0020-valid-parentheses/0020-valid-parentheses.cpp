using st_ch = stack<char>;
using map_ch = map<char, char>;

class Solution {
public:
    bool isValid(string s) {
        if (s.size() == 1 || s.size() % 2 != 0)
            return false;

        st_ch st;
        map_ch mp = {{')', '('}, {'}', '{'}, {']', '['}};

        for (char& ch : s) {
            if (ch == '(' || ch == '{' || ch == '[')
                st.push(ch);
            else if (!st.empty() && mp.at(ch) == st.top())
                st.pop();
            else
                return false;
        }
        return (st.empty());
    }
};