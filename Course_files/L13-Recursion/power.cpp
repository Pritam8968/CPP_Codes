#include <iostream>
using namespace std;
int power(int m, int n)
{
    if (m == 0)
        return 0;
    else if (n == 0)
        return 1;
    else
        return m * power(m, n - 1);
}
int main(int argc, char const *argv[])
{
    int m, n;
    cin >> m >> n;
    cout << power(m, n);
    return 0;
}
