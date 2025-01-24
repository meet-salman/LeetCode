class Solution {
public:
    bool isPalindrome(int x) {

        long n = x, rev = 0;
        if (x >= 0) {

            while (n > 0) {
                int d = n % 10;
                n /= 10;
                rev = rev * 10 + d;
            }
        }

        if (x < 0 || rev != x){
            return 0;
        }
        
        return 1;
    }
    
};