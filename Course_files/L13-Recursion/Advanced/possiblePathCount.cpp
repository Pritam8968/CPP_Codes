#include <iostream>
using namespace std;
int possiblePathCount(int s, int e)
{
    if (s == e) // base case I
        return 1;
    if (s > e) // base case II
        return 0;
    int count = 0;
    for (int i = 1; i <= 6; i++)
    {
        count += possiblePathCount(s + i, e);
    }
    return count;
}
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    cout << possiblePathCount(0, n) << endl;
    return 0;
}
