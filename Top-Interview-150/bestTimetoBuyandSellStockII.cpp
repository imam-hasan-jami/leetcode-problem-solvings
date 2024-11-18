// 122. Best Time to Buy and Sell Stock II

#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int l = 0;
    int r = 1;
    int totalProfit = 0;

    while (r < prices.size())
    {
        if (prices[l] < prices[r])
        {
            int profit = prices[r] - prices[l];
            totalProfit += profit;
            l++;
        }
        else
        {
            l = r;
        }
        r++;
    }
    return totalProfit;
}

int main() {
    vector<int> prices = {7,1,5,3,6,4};

    cout << maxProfit(prices);
    
    return 0;
}