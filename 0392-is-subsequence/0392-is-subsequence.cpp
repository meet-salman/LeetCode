class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int idx = 0;
        for(char &c : t){
            if(c == s[idx]) idx++;
        }

        if(idx == s.length()) return 1;
        else return 0;

    }
};