class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s;

        for (auto& e : nums1) {
            if (find(nums2.begin(), nums2.end(), e) != nums2.end())
                s.insert(e);
        }
        vector<int> res(s.begin(), s.end());
        return res;
    }
};