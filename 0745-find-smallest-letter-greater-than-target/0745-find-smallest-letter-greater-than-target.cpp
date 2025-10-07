class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
    
    char next_greatest = letters[0];

    for (auto elem : letters)
    {
        if (elem > target)
        {
            next_greatest = elem;
            break;
        }
    }
    return next_greatest;
    }
};