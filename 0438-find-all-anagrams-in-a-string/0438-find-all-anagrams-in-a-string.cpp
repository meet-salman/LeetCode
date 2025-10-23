class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        int sSize = s.size(), pSize = p.size();
        vector<int> idxs, pFreq(26, 0), aFreq(26, 0);

        if (pSize > sSize)
            return idxs;

        for (auto& e : p)
            pFreq[e - 'a']++;

        // string window = s.substr(0, pSize);
        for(int i = 0; i < pSize; i++){
            aFreq[s[i] - 'a']++;
        }
        // for (auto& e : window)
        //     aFreq[e - 'a']++;

        for (int i = 0; i <= sSize - pSize; i++) {
            if (i > 0) {
                aFreq[s[i - 1] - 'a']--;
                aFreq[s[i + p.size() - 1] - 'a']++;
            }

            if (pFreq == aFreq)
                idxs.push_back(i);
        }

        return idxs;
    }
};