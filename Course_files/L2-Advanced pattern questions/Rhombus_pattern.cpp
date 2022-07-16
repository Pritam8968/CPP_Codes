#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++) //loop for the inverted space triangle//
        {
            cout << " ";
        }
        for (int k = 1; k <= n; k++) //loop for the star rhombus//
        {
            cout << "*";
        }
        cout << "*" << endl;
    }

    return 0;
}