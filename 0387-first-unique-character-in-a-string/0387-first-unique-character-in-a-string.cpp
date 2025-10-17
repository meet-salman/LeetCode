class Solution {
public:
    int firstUniqChar(string s) 
    {
        vector<int> freqs(26,0);
        int size = s.size();

        for(auto e : s) freqs[e - 'a']++;

        for(int i = 0; i < size; i++){
            if(freqs[s[i] - 'a'] == 1)
                return i;
        }
            

    return -1;
    }
};