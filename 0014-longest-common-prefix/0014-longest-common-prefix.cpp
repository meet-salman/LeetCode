class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string lcp = "";

        sort(strs.begin(), strs.end());
        string first = strs[0];
        string last = strs[strs.size() - 1];

        for(int i = 0; i < min(first.length(), last.length()); i++){
            if (first[i] != last[i]){
                return lcp;
            }
            lcp += first[i];
        }

    return lcp;
    }
};