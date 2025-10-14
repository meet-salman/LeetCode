class Solution {
public:
    char findTheDifference(string s, string t) {
        int sSize = s.size(), tSize = t.size();
        char diff;
        
        // ==============================================
        // unordered_map<char, int> sMap;
        // unordered_map<char, int> tMap;
        // sMap.reserve(sSize), tMap.reserve(tSize);

        // for (auto e : s) sMap[e]++;
        // for (auto e : t) tMap[e]++;

        // for (auto e : t){
        //     if (tMap[e] != sMap[e]){
        //         diff = e;
        //         break;    
        //     } 
        // } 
        // ==============================================

        
        vector<int> vec(26, 0);
        for (int i = 0; i < tSize; i++)
            vec[t[i] - 'a']++;
    
        for (int i = 0; i < sSize; i++)
            vec[s[i] - 'a']--;
    
        for (int i = 0; i < vec.size(); i++)
        {
            if (vec[i] != 0)
            {
                diff = i + 'a';
                break;
            }
        }


        return diff;
    }
};