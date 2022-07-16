/*#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, sum = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            cout << sum << endl; // The total number of sub arrays = n*(n+1)/2
        }
    }
    return 0;
}*/
#include <iostream>
using namespace std;
void sumSubarray(int arr[], int n)
{
    int sum;
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            cout << sum << '\n';
        }
    }
}
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sumSubarray(arr, n);
    return 0;
}
