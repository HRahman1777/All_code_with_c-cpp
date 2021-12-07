/*
12. Integer to Roman
- Easy
*/

class Solution
{
public:
    int romanToInt(string s)
    {

        map<char, int> m;
        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;

        int sum = 0;
        reverse(s.begin(), s.end());

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'X' && s[i + 1] == 'I')
            {
                sum += 9;
                i++;
            }
            else if (s[i] == 'V' && s[i + 1] == 'I')
            {
                sum += 4;
                i++;
            }
            else if (s[i] == 'L' && s[i + 1] == 'X')
            {
                sum += 40;
                i++;
            }
            else if (s[i] == 'C' && s[i + 1] == 'X')
            {
                sum += 90;
                i++;
            }
            else if (s[i] == 'D' && s[i + 1] == 'C')
            {
                sum += 400;
                i++;
            }
            else if (s[i] == 'M' && s[i + 1] == 'C')
            {
                sum += 900;
                i++;
            }
            else
            {
                sum += m[s[i]];
            }
        }

        return sum;
    }
};