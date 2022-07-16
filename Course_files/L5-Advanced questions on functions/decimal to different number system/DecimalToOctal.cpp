#include <bits/stdc++.h>
using namespace std;
int decTooct(int n)
{
    int oct = 0, l_digit = 0;
    int i = 0; //counter variable for power of 10
    while (n > 0)
    {
        l_digit = n % 8;
        n /= 8;
        oct += l_digit * pow(10, i);
        i++;
    }
    return oct;
}
int main()
{
    int n;
    cin >> n;
    cout << decTooct(n);
    return 0;
}