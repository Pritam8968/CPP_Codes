#include <bits/stdc++.h>
using namespace std;
int bin_To_dec(int n)
{
    int dec = 0, c = 1;
    while (n > 0)
    {
        int l_digit = n % 10;
        dec += l_digit * c;
        c *= 2;
        n /= 10;
    }
    /*
    
    //*Alternate way
    int dec = 0, l_digit = 0;
    int i = 0; //counter variable for power of 10
    while (n > 0)
    {
        l_digit = n % 10;
        n /= 10;
        dec += l_digit * pow(2, i);
        i++;
    }
    */
    return dec;
}
int main()
{
    int n;
    cin >> n;
    cout << bin_To_dec(n) << endl;
    return 0;
}