class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> combinations;

    int size = nums.size(),
        start = 0, end = size - 1, fixed = 1;

    for (int i = 0; i < size; i++)
    {
        fixed = i + 1, start = fixed + 1, end = size - 1;

        if ((i != 0 && nums[i] == nums[i - 1]))
            continue;

        while (fixed < end)
        {
            while (start < end)
            {
                long long sum = (long long)nums[i] + nums[fixed] + nums[start] + nums[end];

                if (sum == target)
                {
                    combinations.push_back({nums[i], nums[fixed], nums[start], nums[end]});
                    start++;
                    end--;

                    while (start < end && nums[start] == nums[start - 1])
                        start++;
                    while (start < end && nums[end] == nums[end + 1])
                        end--;
                }
                else if (sum < target)
                    start++;
                else
                    end--;
            }

            fixed++;
            start = fixed + 1;
            end = size - 1;

            while (fixed < end && nums[fixed] == nums[fixed - 1])
            {
                fixed++;
                start = fixed + 1;
            }
        }
    }

    return combinations;
    }
};