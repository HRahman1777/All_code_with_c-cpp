/*
14. Longest Common Prefix
- Easy

*/

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        int siz = strs.size();
        if (siz == 0)
            return "";

        int min = 201, f;

        for (int i = 0; i < siz; i++)
        {
            if (strs[i].size() < min)
            {
                min = strs[i].size();
                f = i;
            }
        }

        string s = strs[f];
        string res = "";

        for (int i = 0; i < strs[f].size(); i++)
        {
            for (int j = 0; j < siz; j++)
            {
                if (strs[f][i] != strs[j][i])
                    return res;
            }
            res += strs[f][i];
        }

        return res;
    }
};
