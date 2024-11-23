class Solution {
public:
    void moveZeroes(vector<int>& nums) {
      
        int count = 0, move = 0;

        // Count zeros
        for (int i = 0; i < nums.size(); i++){

            if (nums[i] == 0){
                count++;
            }
        }
           

        // Moving zeros
        int i = 0;

        while(i < nums.size()){

            if(move < count){

                if(nums[i] == 0){

                    nums.erase(nums.begin() + i);
                    nums.push_back(0);
                    move++;
                }
                else{
                    i++;
                }
            }
            else{
                break;
            }
        }

    }
};