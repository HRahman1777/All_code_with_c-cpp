#include <bits/stdc++.h>
using namespace std;

int maximumToys(vector<int> prices, int k)
{
    int siz = prices.size();
    for (int i = 1; i < siz; i++)
    {
        if (prices[i] < prices[i - 1])
        {
            int x = prices[i], j;
            for (j = i; j >= 0 && prices[j] >= x; j--)
            {
                prices[j] = prices[j - 1];
            }
            prices[j + 1] = x;
        }
    }
    int cnt = 0, sum = 0;
    for (int i = 0; i < siz; i++)
    {
        if (sum + prices[i] < k)
        {
            sum += prices[i];
            cnt++;
        }
        else
            break;
    }

    return cnt;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> prices(n);

    for (int i = 0; i < n; i++)
    {
        int prices_item;
        cin >> prices_item;

        prices[i] = prices_item;
    }

    int result = maximumToys(prices, k);
    cout << result << endl;

    return 0;
}
