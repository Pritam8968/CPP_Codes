#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, m;
    cin >> n >> m;
    int matrix[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }
    int element;
    bool flag = false;
    cin >> element;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == element)
            {
                cout << "Element is at ( " << i << ", " << j << " )\n";
                flag = true;
                break;
            }
        }
    }
    if (!flag)
        cout << "Element not found\n";
    return 0;
}
