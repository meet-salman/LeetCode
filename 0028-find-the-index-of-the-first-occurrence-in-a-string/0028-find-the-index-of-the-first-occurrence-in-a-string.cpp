class Solution {
public:
    int strStr(string haystack, string needle) {

        int idx = -1;

        if (needle.size() > haystack.size()) {
            return idx;
        }

        for (int i = 0; i <= haystack.size() - needle.size(); i++) {
            bool found = true;

            for (int j = 0; j < needle.size(); j++) {
                if (haystack[i + j] != needle[j]) {
                    found = false;
                }
            }

            if (found) {
                idx = i;
                break;
            }
        }

        return idx;
    }
};