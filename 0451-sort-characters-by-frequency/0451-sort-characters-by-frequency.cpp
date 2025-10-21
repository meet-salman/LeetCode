class Solution {
public:
    struct St {
        char c;
        int freq;
    };
    string frequencySort(string s) {
        int sSize = s.size();
        string str = "";
        map<char, int> freqs;

        for (auto& ch : s)
            freqs[ch]++;

        // while (str.size() != s.size()) {

        //     p = *(freqs.begin());
        //     for (auto it = freqs.begin(); it != freqs.end(); it++) {
        //         if (it->second > p.second)
        //             p = *it;
        //     }

        //     for (int i = 0; i < p.second; i++) {
        //         str += p.first;
        //     }
        //     freqs.erase(p.first);
        // }

        // ====================================

        // vector<St> v;
        // for (auto& p : freqs)
        //     v.push_back({p.first, p.second});

        // sort(v.begin(), v.end(),
        //      [](const St& a, const St& b) { return a.freq > b.freq; });

        // for (int i = 0; i < v.size(); i++) {
        //     for (int j = 0; j < v[i].freq; j++) {
        //         str += v[i].c;
        //     }
        // }

        // ============================

        vector<vector<char>> bucket(sSize + 1);
        for (auto& p : freqs) {
            bucket[p.second].push_back(p.first);
        }

        for (int i = sSize; i > 0; i--) {
            for (char c : bucket[i])
                str += string(i, c);
        }
        return str;
    }
};