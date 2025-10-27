class Solution {
public:

void merge(vector<int> &vec, int start, int mid, int end){
    vector<int> temp;
    int left = start, right = mid + 1;

    while (left <= mid && right <= end)
    {
        if (vec[left] <= vec[right]) temp.push_back(vec[left++]);
        else temp.push_back(vec[right++]);
    }

    while (left <= mid) temp.push_back(vec[left++]);
    while (right <= end) temp.push_back(vec[right++]);

    for (int i = start; i <= end; i++) vec[i] = temp[i - start];
    
}

void merge_sort(vector<int> &vec, int start, int end){
    if (start >= end) return;

    int mid = (start + end) / 2;

    merge_sort(vec, start, mid);
    merge_sort(vec, mid + 1, end);
    merge(vec, start, mid, end);
}
    int findKthLargest(vector<int>& nums, int k) {

        int size = nums.size();
        merge_sort(nums, 0, size - 1);

        return nums[size - k];
    }
};