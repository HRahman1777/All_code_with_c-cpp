#include <bits/stdc++.h>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);

string caesarCipher(string s, int k)
{
    int l = s.size();
    int dif;
    k = k % 26;
    for (int i = 0; i < l; i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            dif = 90 - s[i];
            if (dif >= k)
                s[i] = s[i] + k;
            else
            {
                dif = k - dif - 1;
                s[i] = 'A' + dif;
            }
        }
        else if (s[i] >= 97 && s[i] <= 122)
        {
            dif = 122 - s[i];
            if (dif >= k)
                s[i] = s[i] + k;
            else
            {
                dif = k - dif - 1;
                s[i] = 'a' + dif;
            }
        }
    }

    return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string s;
    getline(cin, s);

    string k_temp;
    getline(cin, k_temp);

    int k = stoi(ltrim(rtrim(k_temp)));

    string result = caesarCipher(s, k);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str)
{
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));

    return s;
}

string rtrim(const string &str)
{
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end());

    return s;
}
