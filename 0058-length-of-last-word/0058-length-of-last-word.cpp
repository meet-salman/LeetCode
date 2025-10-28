class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length();
        int l =0;
        bool f = false;
        for(int i = n-1; i >= 0; i--){
            if(s[i] == ' ' && f){
                return l;
            }
            if(s[i]!= ' '){
                l++;
                f = true;
            }
        }
        return l;
    }
};