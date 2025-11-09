class Solution {
public:
    int search(vector<int>& nums, int target) {

        int n = nums.size();
        if (nums[0] < nums[n - 1]) return binarySearch(nums, 0, n-1, target);
        else nums.insert(nums.end(), nums.begin(), nums.end());
        n *= 2;
        
        int beg = 1, end = n - 2;
        while (nums[beg - 1] < nums[beg]) beg++;
        while (nums[end] < nums[end + 1]) end--;

        if (beg > end) return binarySearch(nums, 0, n-1, target);

        int idx = binarySearch(nums, beg, end, target);
        cout << idx;
        if (idx < 0) return idx;
        else if (idx >= n / 2) return (idx - (n / 2));
        else return idx;
    }

    // ------------------------------
    int binarySearch(const vector<int>& vec, int low, int high, int target) {
        while (low <= high) {
            int mid = low + (high - low) / 2; // Prevents potential overflow compared to (low + high) / 2

            if (vec[mid] == target)
                return mid; // Element found, return its idx
            else if (vec[mid] < target)
                low = mid + 1; // Target is in the right half
            else
                high = mid - 1; // Target is in the left half
        }
        return -1; // Element not found
    }
};