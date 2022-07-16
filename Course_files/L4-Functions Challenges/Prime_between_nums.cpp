#include "iostream"
#include "math.h"
using namespace std;
bool checkprime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main(int argc, char const *argv[])
{
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (checkprime(i))
        {
            cout << i << ",";
        }
    }
    return 0;
}
