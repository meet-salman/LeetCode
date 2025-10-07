class Solution {
public:

int binary_search(vector<int>& arr, int start, int end, int target){
    if (start > end)
        return -1;

    int midPoint = start + ((end - start) / 2);

    if (arr[midPoint] == target)
        return midPoint;

    if (target > arr[midPoint])
        return binary_search(arr, midPoint + 1, end, target);
    else
        return binary_search(arr, start, midPoint - 1, target);
}
    int search(vector<int>& nums, int target) {
        
        int size = nums.size();

        return binary_search(nums, 0, size-1, target);

    }
};