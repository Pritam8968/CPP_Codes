/**
 * given 2*n board and tiles of 2*1. count the number of ways to tile the given board using the tiles
 */

#include <iostream>
using namespace std;
int tilingWays(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    //     for vertical and  for horizontal placement
    return tilingWays(n - 1) + tilingWays(n - 2);
}
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    cout << tilingWays(n);
    return 0;
}
