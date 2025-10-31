class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        vector<int> vec;
        int l = 0, r = 0;

        while(l < m && r < n){
            if(nums1[l] <= nums2[r])
                vec.push_back(nums1[l++]);
            else
                vec.push_back(nums2[r++]);
        }

        while(l < m)
            vec.push_back(nums1[l++]);
        while(r < n)
            vec.push_back(nums2[r++]);

        for(int i = 0; i < vec.size(); i++)
            nums1[i] = vec[i];
        
    }
};