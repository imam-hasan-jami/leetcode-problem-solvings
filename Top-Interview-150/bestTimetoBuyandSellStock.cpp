// 121. Best Time to Buy and Sell Stock

#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int l = 0;
    int r = 1;
    int maxProfit = 0;

    while (r < prices.size())
    {
        if (prices[l] < prices[r])
        {
            int profit = prices[r] - prices[l];
            maxProfit = max(maxProfit, profit);
        }
        else
        {
            l = r;
        }
        r++;
    }
    return maxProfit;
}

int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << maxProfit(prices);

    return 0;
}