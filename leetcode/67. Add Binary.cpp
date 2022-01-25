/*
67. Add Binary
-Easy
*/

class Solution
{
public:
    string addBinary(string a, string b)
    {

        int lena = a.size() - 1;
        int lenb = b.size() - 1;
        int min;
        if (lena <= lenb)
        {
            min = lena;
        }
        else
            min = lenb;

        string s = "";
        int sign = 0;

        for (int i = min - 1; i >= 0; i--)
        {
            if (a[i] == '0' && b[i] == '0')
            {
                if (sign == 1)
                {
                    s += '1';
                    sign = 0;
                }
                else
                    s += '0';
            }
            else if ((a[i] == '1' && b[i] == '0') || (a[i] == '0' && b[i] == '1'))
            {
                if (sign == 1)
                {
                    s += '0';
                    sign = 1;
                }
                else
                    s += '1';
            }
            else if (a[i] == '1' && b[i] == '1')
            {
                if (sign == 1)
                {
                    s += '1';
                }
                else
                    s += '0';
                
                sign = 1;
            }
        }

        reverse(s.begin(), s.end());

        return s;
    }
};