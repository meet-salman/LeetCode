class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        if (s.size() == 1)
            return 0;

        for (auto& p : s) {
            if (p == '(' || p == '[' || p == '{')
                st.push(p);
            else {
                if (!st.empty()) {

                    if (p == ')' && st.top() == '(' ||
                        p == ']' && st.top() == '[' ||
                        p == '}' && st.top() == '{')
                        st.pop();
                    else
                        break;
                } else
                    st.push(p);
            }
        }
        return (st.empty());
    }
};