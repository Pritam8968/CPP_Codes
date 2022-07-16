#include <bits/stdc++.h>
using namespace std;
int decTobin(int n)
{
    int bin = 0, l_digit = 0;
    int i = 0; //counter variable for power of 10
    while (n > 0)
    {
        l_digit = n % 2;
        n /= 2;
        bin += l_digit * pow(10, i);
        i++;
    }
    return bin;
}
int main()
{
    int n;
    cin >> n;
    cout << decTobin(n);
    return 0;
}