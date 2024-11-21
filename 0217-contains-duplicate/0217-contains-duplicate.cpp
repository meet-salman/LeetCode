class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        bool duplicte = false;
        set<int> s;

        for(int i = 0; i < nums.size(); i++){

            if(!(s.insert(nums[i]).second)){
                duplicte = true;
                break;
            }
        }
        return duplicte;
    }
};