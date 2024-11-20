class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        
    int carry = 1, length = digits.size();

    for (int i = length - 1; i >= 0; i--)
    {
        int sum = digits[i] + carry;

        if (sum > 9)
        {
            digits[i] = sum % 10;
            carry = sum / 10;
        }
        else
        {
            digits[i] = sum;
            carry = 0;
            break;
        }
    }

    if (carry > 0)
    {
        digits.insert(digits.begin(), carry);
    }

    cout << endl;

    for (int j = 0; j < digits.size(); j++)
    {
        cout << digits[j];
    }

        return digits;
    }
};