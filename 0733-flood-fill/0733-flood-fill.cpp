class Solution {
public:
    void dfs(vector<vector<int>>& img, int n, int m, int row, int col,
             int prevColor, int color) {

        if (row < 0 || row >= n || col < 0 || col >= m)
            return;

        if (img[row][col] != prevColor)
            return;

        img[row][col] = color;

        dfs(img, n, m, row + 1, col, prevColor, color);
        dfs(img, n, m, row - 1, col, prevColor, color);
        dfs(img, n, m, row, col + 1, prevColor, color);
        dfs(img, n, m, row, col - 1, prevColor, color);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int color) {

        int n = image.size();
        int m = image[0].size();

        int prevColor = image[sr][sc];

        if (prevColor == color)
            return image;

        dfs(image, n, m, sr, sc, prevColor, color);

        return image;
    }
};