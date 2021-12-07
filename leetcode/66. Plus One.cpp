/*
66. Plus One
-Easy
*/
class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        if (digits.size() == 0)
            digits.push_back(1);
        else if (digits[digits.size() - 1] < 9)
            digits[digits.size() - 1]++;
        else
        {
            int i;
            for (i = digits.size() - 1; i >= 0; i--)
            {
                if (digits[i] != 9)
                    break;
                digits[i] = 0;
            }
            if (i <= -1)
            {
                digits[i + 1] = 1;
                digits.push_back(0);
            }
            else
            {
                digits[i]++;
            }
        }

        return digits;
    }
};
