// Stock buy and sell for maximum profit
// (Index represents days and their elemenet stock's value)

#include <iostream>
using namespace std;

#include <iostream>
#include <cmath>
using namespace std;

// Sir's (better)
int maxProfit(int price[], int n)
{
	int profit = 0;

	for(int i = 1; i < n; i++)
	{
		if(price[i] > price[i - 1])
			profit += price[i] - price[i -1];
	}

	return profit;

}
// Time Complexity:O(n) 
// Auxiliary Space:O(1) 




// Mine
int maxProfit(int n, int arr[])
{
    int buy = 0, sell = 0;

    if (n == 1)
        return 0;

    for (int i = 0; i < n; i++)
    {
        if (i - 1 < 0 && arr[i] < arr[i + 1])
        {
            buy = arr[i];
            continue;
        }
        if (i - 1 < 0)
        {
            continue;
        }
        if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1])
        {
            sell = sell + arr[i] - buy;
            continue;
        }
        if (arr[i - 1] > arr[i] && arr[i] < arr[i + 1])
        {
            buy = arr[i];
            // sell = sell - arr[i];
            continue;
        }
        if (arr[i - 1] < arr[i] && i + 1 > n - 1)
            sell = sell + arr[i] - buy;
    }
    return sell;
}
// Time Complexity:Θ(n) 
// Auxiliary Space:Θ(1) 


int main()
{
    int arr[] = {10, 20, 30};
    int n = 3;
    cout << maxProfit(n, arr) << endl;
    cout << maxProfit(arr, n) << endl;
    return 0;
}
