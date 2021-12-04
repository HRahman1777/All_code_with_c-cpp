/*
20. Valid Parentheses
-Easy
*/
class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;
        map<char, char> m;
        m[')'] = '(';
        m['}'] = '{';
        m[']'] = '[';

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                st.push(s[i]);
            }
            else if (s[i] == '}' || s[i] == ')' || s[i] == ']')
            {
                if (st.empty())
                    return false;
                else if (m[s[i]] == st.top())
                    st.pop();
                else
                    return false;
            }
        }
        if (st.empty())
            return true;
        return false;
    }
};