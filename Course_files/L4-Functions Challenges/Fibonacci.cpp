#include "iostream"
using namespace std;
void fib(int t)
{
    int t1 = 0, t2 = 1, nextt;
    cout << t1 << "," << t2;
    for (int i = 0; i < t - 2; i++)
    {
        nextt = t1 + t2;
        cout << "," << nextt;
        t2 = nextt;
        t1 = t2;
    }
}
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    fib(n);
    return 0;
}
