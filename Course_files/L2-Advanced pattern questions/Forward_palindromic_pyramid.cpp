#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int j;
        for (j = 1; j <= n - i; j++) //loop for spaces on the left//
        {
            cout << "  ";
        }
        int k = 1;
        for (; j <= n; j++) //loop for increasing nums//
        {
            cout << k++ << " ";
        }
        k = i - 1;
        for (; j <= n + i - 1; j++) //loop for decreasing nums//
        {
            cout << k-- << " ";
        }
        cout << endl;
    }
    return 0;
}
