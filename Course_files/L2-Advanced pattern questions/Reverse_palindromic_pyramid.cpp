#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) //loop for row//
    {
        int j;
        for (j = 1; j <= n - i; j++) //loop for spaces at the left//
        {
            cout << "  ";
        }
        int k = i;
        for (; j <= n; j++) //loop for the decreasing nums//
        {
            cout << k-- << " ";
        }
        k = 2;
        for (; j <= n + i - 1; j++) //loop for the increasing nums//
        {
            cout << k++ << " ";
        }
        cout << endl;
    }
    return 0;
}