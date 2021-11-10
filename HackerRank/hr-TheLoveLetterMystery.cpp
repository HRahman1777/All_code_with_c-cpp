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

int theLoveLetterMystery(string s)
{
    int l = s.size();
    int res;
    string str;
    if (isPali(s))
    {
        return 0;
    }
    else
    {
        int i = 0, j = l - 1;
        res = 0;
        while (i <= j)
        {
            if (s[i] != s[j])
            {
                res += abs(s[i] - s[j]);
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

        int result = theLoveLetterMystery(s);

        cout << result << "\n";
    }

    return 0;
}
