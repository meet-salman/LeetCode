class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        return binary_search(arr, 0, arr.size()-1);
    }

    int binary_search(vector<int>& arr, int start, int end){
        if(start > end) return -1;

        int midIdx = start + ((end - start)/2);

        if(arr[midIdx] > arr[midIdx+1] && arr[midIdx] > arr[midIdx-1]) return midIdx;
        else if(arr[midIdx] > arr[midIdx+1] && arr[midIdx] < arr[midIdx-1])
            return binary_search(arr, start, midIdx-1);
        else if(arr[midIdx] < arr[midIdx+1])
            return binary_search(arr, midIdx+1, end);
        else
            return binary_search(arr, start, midIdx-1);
    }   
};