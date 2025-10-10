class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> combinations;

    int size = nums.size(),
        start = 0, end = size - 1;

    for (int i = 0; i < size; i++){

        start = i + 1, end = size - 1;
        if (nums[i] > 0) break;
        if (i != 0 && nums[i] == nums[i - 1]) continue;

        while (start < end){
            int sum = nums[i] + nums[start] + nums[end];
            
            if (sum == 0){
                combinations.push_back({nums[i], nums[start], nums[end]});
                start++;
                end--;

                while(start < end && nums[start] == nums[start-1]) start++;
                while(start < end && nums[end] == nums[end+1]) end--;
            }
            else if (sum < 0) start++;
            else end--;
        }
    }

    return combinations;
    }
};