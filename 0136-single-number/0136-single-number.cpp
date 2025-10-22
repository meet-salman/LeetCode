class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int s = 0;

        // unordered_map<int, int> freqs;

        // for (auto& e : nums)
        //     freqs[e]++;

        // for (auto& p : freqs)
        //     if (p.second == 1)
        //         s = p.first;

        // ----------------

        for (auto& e : nums)
            s ^= e;

        return s;
    }
};