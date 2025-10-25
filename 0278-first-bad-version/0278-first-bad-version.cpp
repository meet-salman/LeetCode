// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int binary_search(int n) {
        long long start = 0, end = n, bad = n;

        while (start <= end) {
            long long mid = (start + end) / 2;

            if (isBadVersion(mid)){
                bad = mid;
                end = mid-1;
            }
            else
                start = mid + 1;
        }
        return bad;
    }

    int firstBadVersion(int n) {

        return binary_search(n);
    }
};