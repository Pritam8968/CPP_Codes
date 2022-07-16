#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= 3; i++) //rows are fixed(3)//
    {
        for (int j = 1; j <= n; j++)
        {
            if ((i + j) % 4 == 0 || (i == 2 & j % 4 == 0)) // for all star positions divisible by 4 for all stars in 2nd row and column num divisible by 4//
            {
                cout << "*"
                     << " ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}