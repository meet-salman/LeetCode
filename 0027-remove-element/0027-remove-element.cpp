class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        vector<int> newNums;

        for(int i = 0; i < nums.size(); i++){

            if(nums[i] != val){
                newNums.push_back(nums[i]);
            }
        }

        nums = newNums;
        return nums.size();
    }
};