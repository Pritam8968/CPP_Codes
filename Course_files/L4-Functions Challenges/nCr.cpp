#include "iostream"
using namespace std;
int fact(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
    {
        f *= i;
    }
    return f;
}
int nCr(int n, int r)
{
    return (fact(n) / (fact(n - r) * fact(r)));
}
int main(int argc, char const *argv[])
{
    int n, r;
    cin >> n >> r;
    cout << nCr(n, r);
    return 0;
}
