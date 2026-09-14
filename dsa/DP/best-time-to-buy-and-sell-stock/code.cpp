#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to find maximum profit
int maxProfit(vector<int>& prices)
{
    int mini = prices[0]; // Minimum buying price
    int profit = 0;       // Maximum profit

    for(int i = 0; i < prices.size(); i++)
    {
        int cost = prices[i] - mini; // Profit if sold today

        profit = max(profit, cost);  // Update max profit

        mini = min(mini, prices[i]); // Update minimum price
    }

    return profit;
}

int main()
{
    int n;

    cout << "Enter number of days: ";
    cin >> n;

    vector<int> prices(n);

    cout << "Enter stock prices: ";
    for(int i = 0; i < n; i++)
    {
        cin >> prices[i];
    }

    cout << "Maximum Profit = "
         << maxProfit(prices);

    return 0;
}