// Sieve of eratosthenes method
#include <iostream>
#include <math.h>
using namespace std;
void primeSieve(int n)
{
    int prime[n + 1] = {0};
    for (int i = 2; i <= n; i++) // marking loop
    {
        if (prime[i] == 0) // if the num is unmarked
        {
            for (int j = i * i; j <= n; j += i) // traversing in multiples of i
            {
                prime[j] = 1;
            }
        }
    }
    for (int i = 2; i <= n; i++) // printing the unmarked numbers i.e. the prime numbers
    {
        if (prime[i] == 0)
        {
            cout << i << " ";
        }
    }
}
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    primeSieve(n);
    return 0;
}
