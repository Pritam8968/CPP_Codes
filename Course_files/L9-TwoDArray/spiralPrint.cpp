#include <iostream>
using namespace std;
/*
matrix: 2D array
r: row start
m: row end
c: column start
n: column end
i: iterative variable
*/
void spiralPrint(int m, int n, int matrix[][4])
{
    int r = 0, c = 0;
    while (r < m && c < n)
    {
        for (int i = c; i < n; i++)
            cout << matrix[r][i] << " ";
        r++;
        for (int i = r; i < m; i++)
            cout << matrix[i][n - 1] << " ";
        n--;
        if (r < m)
        {
            for (int i = n - 1; i > c - 1; i--)
                cout << matrix[m - 1][i] << " ";
            m--;
        }
        if (c < n)
        {
            for (int i = m - 1; i > r - 1; i--)
                cout << matrix[i][c] << " ";
            c++;
        }
    }
}
int main(int argc, char const *argv[])
{
    int matrix[4][4] =
        {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12},
            {13, 14, 15, 16}};
    spiralPrint(4, 4, matrix);
    return 0;
}
