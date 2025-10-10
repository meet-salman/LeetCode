class Solution {
public:

    bool binary_search(vector<int> &arr, int start, int end, int target){
        if (start > end)
            return false;

        int midPoint = (start + end) / 2;

        if (arr[midPoint] == arr[target] * 2 && midPoint != target)
            return true;

        if (arr[target] * 2 > arr[midPoint] || arr[midPoint] == 0)
            return binary_search(arr, midPoint + 1, end, target);
        else
            return binary_search(arr, start, midPoint - 1, target);
    }

    bool checkIfExist(vector<int>& arr) {
        
        int size = arr.size() - 1;
        sort(arr.begin(), arr.end());

        for (int i = 0; i < size; i++){
            if (binary_search(arr, 0, size, i))
                return true;            
        }

    return false;
    }
};