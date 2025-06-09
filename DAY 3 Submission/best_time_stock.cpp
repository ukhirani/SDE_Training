#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    int min_price = prices[0];
    int max_profit = 0;
    for (int price : prices) {
        min_price = min(min_price, price);
        max_profit = max(max_profit, price - min_price);
    }
    return max_profit;
}

int main() {
    int n;
    cout << "Enter number of price entries: ";
    cin >> n;

    vector<int> prices(n);
    cout << "Enter the prices:\n";
    for(int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    int profit = maxProfit(prices);
    cout << "Maximum profit: " << profit << endl;

    return 0;
}
