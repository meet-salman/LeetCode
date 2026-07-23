class Solution {
public:
    int n;
    int solve(vector<vector<int>>& matrix, vector<vector<int>>& dp, int i, int j) {

        if (j < 0 || j >= n)
            return 1e9;

        if (i == n - 1)
            return dp[i][j] = matrix[i][j];

        if(dp[i][j] != INT_MIN)
            return dp[i][j];

        int down_left = solve(matrix, dp, i + 1, j - 1);
        int down_bottom = solve(matrix, dp, i + 1, j);
        int down_right = solve(matrix, dp, i + 1, j + 1);

        return dp[i][j] = matrix[i][j] + min({down_left, down_bottom, down_right});
    }

    int minFallingPathSum(vector<vector<int>>& matrix) {

        n = matrix.size();
        int ans = 1e9;
        vector<vector<int>> dp(n, vector<int>(n, INT_MIN));

        for (int j = 0; j < n; j++) {
            ans = min(ans, solve(matrix, dp, 0, j));
        }

        return ans;
    }
};