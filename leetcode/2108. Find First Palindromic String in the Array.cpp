/*
2108. Find First Palindromic String in the Array
- Easy
*/

class Solution
{
public:
    string firstPalindrome(vector<string> &words)
    {

        int siz = words.size();
        string res;
        for (int ii = 0; ii < siz; ii++)
        {
            string s = words[ii];
            int i = 0, j = s.size() - 1;
            int flag = 0;
            while (i <= j)
            {
                if (s[i] == s[j])
                    flag = 1;
                else
                {
                    flag = 0;
                    break;
                }
                i++;
                j--;
            }

            if (flag == 1)
                return s;
        }

        return "";
    }
};