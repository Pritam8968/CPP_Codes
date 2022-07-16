#include <bits/stdc++.h>
using namespace std;
int hexadecTodec(string n)
{
    int dec = 0, c = 1;
    int size = n.size();
    for (int i = size - 1; i > 0; i--)
    {
        if (n[i] >= '0' && n[i] <= '9')
        {
            dec += c * (n[i] - '0');
        }
        else if (n[i] >= 'A' && n[i] <= 'F')
        {
            dec += c * (n[i] - 'A' + 10);
        }
        c *= 16;
    }
    return dec;
}
int main()
{
    string n;
    cin >> n;
    cout << hexadecTodec(n) << endl;
    return 0;
}