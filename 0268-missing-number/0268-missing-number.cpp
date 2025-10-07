class Solution {
public:

    int missingNumber(vector<int>& nums) {

        int n = nums.size(),
            sum_of_n = n * (n+1)/2,
            sum_of_array =0;
        
    for (auto elem : nums)
    {
        sum_of_array += elem;
    }
    return (sum_of_n - sum_of_array);
    }
};