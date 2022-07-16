/* An arithmetic array is an array that contains at least two integers and the differences between consecutive
 integers are equal. For example [9,10],[3,3,3],[9,7,5,3] are arithmetic arrays */
/*Longest contiguous arithmetic subarray*/

#include <bits/stdc++.h>
using namespace std;
int lenOfLongestArithmeticSubarray(int arr[], int n)
{
    int pd = arr[1] - arr[0];
    int cur = 2, len = 2;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] - arr[i - 1] == pd)
        {
            cur++;
        }
        else
        {
            pd = arr[i] - arr[i - 1];
            cur = 2;
        }
        len = max(len, cur);
    }
    return len;
}
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << lenOfLongestArithmeticSubarray(arr, n) << '\n';
    }
    return 0;
}
