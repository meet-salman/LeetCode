class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        priority_queue<int, vector<int>, greater<int>> sqrs;
        vector<int> res;

        for (auto& n : nums)
            res.push_back(n * n);

        sort(res.begin(), res.end());
        return res;
    }
};