class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int idx = 0;

        for(int i = 0; i < nums.size(); i++){

            if(nums[i] >= target){
                idx = i;
                break;
            }
            idx = i + 1;
        }
        return idx;
    }
};