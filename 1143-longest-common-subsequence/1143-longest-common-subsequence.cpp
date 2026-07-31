class Solution {
public:
    int lcs(string& s1, string& s2, vector<vector<int>>& dp, int i, int j){
        if(i == 0 || j == 0)
            return 0;

        if(dp[i][j] != -1)
            return dp[i][j];

        if(s1[i-1] == s2[j-1])
            return dp[i][j] = 1 + lcs(s1, s2, dp, i-1, j-1);
        
        return dp[i][j] = max(lcs(s1, s2, dp, i, j-1), lcs(s1, s2, dp, i-1, j));
        
    }

    int longestCommonSubsequence(string text1, string text2) {
        
        int m = text1.size();
        int n = text2.size();

        vector<vector<int>> dp(m+1, vector<int>(n+1, -1));

        lcs(text1, text2, dp, m, n);

        return dp[m][n];


    }
};