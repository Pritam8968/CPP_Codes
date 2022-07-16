#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int m, n;
    cin >> m >> n;
    int matrix[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> matrix[i][j];
    }
    int target;
    cin >> target;
    // we have to start from  non diagonal corner
    int r = 0, c = n - 1; // top-right corner(starting position)
    bool flag = false;
    while (r < m && c >= 0)
    {
        if (matrix[r][c] == target)
        {
            flag = true;
            break;
        }
        else if (matrix[r][c] > target)
            c--; // move toward left
        else
            r++; // move toward down
    }
    if (flag)
        cout << "element found\n";
    else
        cout << "element not found\n";
    return 0;
}
