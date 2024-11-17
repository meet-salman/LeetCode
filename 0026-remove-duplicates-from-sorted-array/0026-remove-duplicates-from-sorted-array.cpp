class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        set<int> st;
        int idx = 0;

        for(int i=0; i < nums.size(); i++){

            if(st.insert(nums[i]).second){
                nums[idx++] = nums[i];
            }
        }
        return st.size();
    }
};