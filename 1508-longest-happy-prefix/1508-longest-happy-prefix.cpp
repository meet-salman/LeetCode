class Solution {
public:
    string longestPrefix(string s) {
        vector<int> lps = compute_lps_array(s, s.size());
        int n = lps[s.size() - 1];
        return s.substr(0, n);
    }

    vector<int> compute_lps_array(string patt, int pSize) {
        vector<int> lps(pSize, 0);
        int pre = 0, suff = 1;
        string str = "";
        int idx = 0;

        while (suff < pSize) {
            if (patt[pre] == patt[suff]) {
                pre++;
                lps[suff] = pre;
                suff++;
            } else {
                if (pre > 0)
                    pre = lps[pre - 1];
                else
                    suff++;
            }
        }

        return lps;
    }
};