#include <iostream>
using namespace std;
void buyAndSellStocks(int prices[], int n)
{
    int bestBuy[100000];
    bestBuy[0] = INT16_MAX;
    for (int i = 1; i < n; i++)
    {
        bestBuy[i] = min(bestBuy[i - 1], prices[i - 1]);
    }

    int maxProfit = 0;

    for (int i = 0; i < n; i++)
    {
        int currProfit = prices[i] - bestBuy[i];
        maxProfit = max(currProfit, maxProfit);
    }
    cout << "max profit = " << maxProfit;
}
int main()
{
    int prices[6] = {7, 5, 3, 2, 1, 0};
    int n = sizeof(prices) / sizeof(int);
    buyAndSellStocks(prices, n);
    return 0;
}