class Solution {
public:
    bool canReach(vector<int>& start, vector<int>& target) {
        const int BOARD = 8;

        vector<pair<int, int>> directions = {
            {2, 1}, {2, -1}, {-2, 1}, {-2, -1},
            {1, 2}, {1, -2}, {-1, 2}, {-1, -2}};

        vector<vector<bool>> visited{BOARD, vector<bool>(BOARD, false)};
        queue<tuple<int, int, int>> q;

        q.emplace(start[0], start[1], 0);
        visited[start[0]][start[1]] = true;

        while (!q.empty()) {

            auto [currRow, currCol, moves] = q.front();
            q.pop();

            if (currRow == target[0] && currCol == target[1])
                return (moves % 2 == 0);

            for (const auto& [dx, dy] : directions) {
                int newRow = currRow + dx;
                int newCol = currCol + dy;

                if ((newRow < 0 || newRow >= BOARD) || (newCol < 0 || newCol >= BOARD))
                    continue;

                if (visited[newRow][newCol])
                    continue;

                visited[newRow][newCol] = true;
                q.emplace(newRow, newCol, moves + 1);
            }
        }
        return false;
    }
};