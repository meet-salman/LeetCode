class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        int rSize = ransomNote.size(), mSize = magazine.size();
        vector<int> r(26, 0);
        vector<int> m(26, 0);

        for (int i = 0; i < rSize; i++)
            r[ransomNote[i] - 'a']++;

        for (int i = 0; i < mSize; i++)
            m[magazine[i] - 'a']++;

        for (int i = 0; i < rSize; i++) {
            if (r[ransomNote[i] - 'a'] > m[ransomNote[i] - 'a'])
                return 0;
        }

        return true;
    }
};