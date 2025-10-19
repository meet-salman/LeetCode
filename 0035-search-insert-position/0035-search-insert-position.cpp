class Solution {
public:
    int binary_search(vector<int>& nums, int size, int target) {
        int start = 0, end = size - 1, shouldAt = size;
        while (start <= end) {
            int midIdx = start + ((end - start) / 2);

            if (nums[midIdx] == target)
                return midIdx;
            else if (target > nums[midIdx])
                start = midIdx + 1;
            else {
                shouldAt = midIdx;
                end = midIdx - 1;
            }
        }
        return (shouldAt < 0) ? 0 : shouldAt;
    }

    int searchInsert(vector<int>& nums, int target) {

        int size = nums.size();

        int idx = binary_search(nums, size, target);

        return idx;
    }
};