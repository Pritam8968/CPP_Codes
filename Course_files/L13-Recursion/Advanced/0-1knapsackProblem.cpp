#include <iostream>
using namespace std;
/**
 * @param value value list
 * @param wt weight list
 * @param n number of items
 * @param W capacity of knapsack
 */
int knapsack(int value[], int wt[], int n, int W)
{
	if (n == 0 || W == 0)
		return 0;
	if (wt[n - 1] > W) // if the weight of the nth item is greater then the capacity of the knapsack
		return knapsack(value, wt, n - 1, W);
	return max(
		knapsack(value, wt, n - 1, W - wt[n - 1]) + value[n - 1], // if nth item is chosen
		knapsack(value, wt, n - 1, W)                             // if nth item is not chosen
	);
}
int main(int argc, char const *argv[])
{
	int wt[] = {10, 20, 30};
	int value[] = {100, 50, 150};
	int W = 50;
	cout << knapsack(value, wt, 3, W);
	return 0;
}
