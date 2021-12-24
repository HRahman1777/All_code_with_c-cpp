/*
9. Palindrome Number
- Easy
*/

class Solution
{
public:
    bool isPalindrome(int x)
    {
        string s = to_string(x);
        int i = 0, j = s.size() - 1;
        bool flag = false;
        while (i <= j)
        {
            if (s[i] == s[j])
                flag = true;
            else
            {
                flag = false;
                return flag;
            }

            i++, j--;
        }

        return flag;
    }
};