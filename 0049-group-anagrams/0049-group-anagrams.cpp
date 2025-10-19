class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int strSize = strs.size();

        unordered_map<string, vector<string>> mp;

        for (auto& str : strs) {
            string key = str;
            sort(key.begin(), key.end());

            mp[key].push_back(str);
        }

        vector<vector<string>> anagrams;
        for (auto& pair : mp)
            anagrams.push_back(pair.second);

        return anagrams;
    }
};