class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        vector<int> position{-1, -1};

        if (nums.size() == 1 && nums[0] == target) {

            return position = {0, 0};
        }

        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] == target) {

                if (position[0] == -1) {
                    position = { i, i };
                } else {
                    position[1] = i;
                }
            }
        }

        return position;
    }
};