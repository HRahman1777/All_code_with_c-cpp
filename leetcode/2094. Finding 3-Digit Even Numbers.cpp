/*
2094. Finding 3-Digit Even Numbers
-Easy
*/

class Solution
{
public:
    vector<int> findEvenNumbers(vector<int> &digits)
    {
        vector<int> v;
        int siz = digits.size();
        for (int i = 0; i < siz; i++)
        {
            if (digits[i] != 0)
            {
                for (int ii = 0; ii < siz; ii++)
                {
                    if (i != ii)
                    {
                        for (int iii = 0; iii < siz; iii++)
                        {
                            if (i != ii && ii != iii && iii != i && digits[iii] % 2 == 0)
                            {
                                v.push_back((100 * digits[i]) + (10 * digits[ii]) + digits[iii]);
                            }
                        }
                    }
                }
            }
        }

        sort(v.begin(), v.end());
        v.erase(unique(v.begin(), v.end()), v.end());
        return v;
    }
};