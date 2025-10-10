class Solution {
public:

void reverse_array(vector<int> &nums, int start, int end){
    while (start < end)
    {
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;

        start++;
        end--;
    }
}

    void rotate(vector<int>& nums, int k) {
        int size = nums.size();

        k = k%size;
        reverse_array(nums, 0, size-1);
        reverse_array(nums, 0, k-1);
        reverse_array(nums, k, size-1);
    }
};