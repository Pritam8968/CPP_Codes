#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) //row//
    {
        for (int j = 1; j <= n - i; j++) // column//
        {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) //column//
        {
            cout << "*"
                 << " ";
        }
        cout << "\n";
    }
    for (int i = n; i >= 1; i--) //row//
    {
        for (int j = 1; j <= n - i; j++) // column//
        {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) //column//
        {
            cout << "*"
                 << " ";
        }
        cout << "\n";
    }
    return 0;
}