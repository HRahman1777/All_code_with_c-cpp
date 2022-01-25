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
    if (isPali(s) && l % 2 != 0) //glxlg #8 stuck
        res = 1;
    else if (isPali(s))
        res = 0;
    else
    {
        int i = 0, j = l - 1;
        res = 0;
        while (i <= j)
        {
            if (s[i] != s[j])
            {
                str = s;
                str[i] = 'a';
                str[j] = 'a';
                if (isPali(str))
                {
                    res = 1;
                }
                break;
            }

            i++;
            j--;
        }
    }
    return res;
}

int main()
{
    string s;
    cin >> s;

    int result = palindromeIndex(s);

    result ? cout << "YES\n" : cout << "NO\n";

    return 0;
}
