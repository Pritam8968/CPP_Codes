#include <bits/stdc++.h>
using namespace std;
bool pyth(int x, int y, int z)
{
    int a = max(x, max(y, z)), b, c;
    if (a == x)
    {
        b = y, c = z;
    }
    else if (a == y)
    {
        b = x, c = z;
    }
    else
    {
        b = x, c = y;
    }
    if (a * a == b * b + c * c)
        return 1;
    else
        return 0;
}

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    if (pyth(x, y, z))
    {
        cout << "Pythagorean Triplet";
    }
    else
    {
        cout << "Not a Pythagorean Triplet";
    }
    return 0;
}