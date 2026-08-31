#include <iostream>
using namespace std;

int main() {
    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = 6;

    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < n; i++) {

        minPrice = min(minPrice, prices[i]);

        int profit = prices[i] - minPrice;

        maxProfit = max(maxProfit, profit);
    }

    cout << maxProfit;

    return 0;
}