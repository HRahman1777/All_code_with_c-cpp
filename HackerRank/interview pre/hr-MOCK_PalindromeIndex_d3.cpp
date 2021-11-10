#include <bits/stdc++.h>
using namespace std;

bool isPali(string s)
{
    int l = s.size();
    int i = 0, j = l - 1;
    bool is;
    while (i <= j)
    {
        if (s[i] != s[j])
        {
            is = false;
            break;
        }
        is = true;
        i++;
        j--;
    }
    return is;
}

int palindromeIndex(string s)
{
    int l = s.size();
    int res;
    string str, str2;
    if (isPali(s))
    {
        return -1;
    }
    else
    {
        int i = 0, j = l - 1;
        res = -1;
        while (i <= j)
        {
            if (s[i] != s[j])
            {
                str = s;
                str.erase(str.begin() + i);
                if (isPali(str))
                {
                    res = i;
                    break;
                }
                str = s;
                str.erase(str.begin() + j);
                if (isPali(str))
                {
                    res = j;
                    break;
                }
            }

            i++;
            j--;
        }
    }
    return res;
}

int main()
{
    int q;
    cin >> q;

    for (int q_itr = 0; q_itr < q; q_itr++)
    {
        string s;
        cin >> s;

        int result = palindromeIndex(s);
        //palindromeIndex(s);

        cout << result << "\n";
    }

    return 0;
}
