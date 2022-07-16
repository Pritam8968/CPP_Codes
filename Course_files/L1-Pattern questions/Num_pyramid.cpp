#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}