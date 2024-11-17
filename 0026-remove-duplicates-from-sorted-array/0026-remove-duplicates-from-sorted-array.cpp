class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        set<int> stArr;
        int idx = 0;

        for(int i=0; i < nums.size(); i++){

            if(stArr.insert(nums[i]).second){
                nums[idx++] = nums[i];
            }
        }
        return stArr.size();
    }
};