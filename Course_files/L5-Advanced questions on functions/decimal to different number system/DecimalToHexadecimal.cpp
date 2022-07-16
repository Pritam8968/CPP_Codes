#include <bits/stdc++.h>
using namespace std;
void decTo_hex(int n)
{
    string hex;
    int i = 0, l_digit = 0; //counter variable for power of 10
    while (n > 0)
    {
        l_digit = n % 16;
        n /= 16;
        if (l_digit < 10)
        {
            hex[i] = l_digit + '0';
        }
        else
        {
            hex[i] = l_digit - 10 + 'A';
        }
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        cout << hex[j];
    }
}
int main()
{
    int n;
    cin >> n;
    decTo_hex(n);
    return 0;
}