class Solution {
public:
    bool is_palindrome(const string& str, int i, int j, bool removed) {

        while (i < j) {
            if(str[i] == str[j]){
                i++;
                j--;
            }
            else{
                if(removed) return false;
                return (is_palindrome(str, i+1, j, true) || is_palindrome(str, i, j-1, true));
            }
        }

        return (i >= j);
    }


    bool validPalindrome(string s) {

        return is_palindrome(s, 0, s.size()-1, false);
            
    }
};