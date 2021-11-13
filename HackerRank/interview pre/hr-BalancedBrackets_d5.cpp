#include <bits/stdc++.h>
using namespace std;

string isBalanced(string s)
{

    if (s.size() % 2 != 0)
    {
        return "NO\n";
    }
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
        }
        else if ((s[i] == ')' || s[i] == '}' || s[i] == ']'))
        {
            if (st.empty())
            {
                return "NO\n";
            }
            else
            {
                if ((st.top() == '(' && s[i] == ')') || (st.top() == '{' && s[i] == '}') || (st.top() == '[' && s[i] == ']'))
                {
                    st.pop();
                }
                else
                {
                    return "NO\n";
                }
            }
        }
        else
        {
            break;
        }
    }

    if (st.empty())
    {
        return "YES\n";
    }
    return "NO\n";
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        cout << isBalanced(s);
    }

    return 0;
}