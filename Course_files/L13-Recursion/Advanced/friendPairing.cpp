#include <iostream>
using namespace std;
int friendPairing(int n)
{
    if (n == 0 || n == 1 || n == 2)
        return n;
    return friendPairing(n - 1)   // keeping nth friend single
           + friendPairing(n - 2) // pairing nth friend
                 * (n - 1);       // because nth friend could be paired up with n-1 remaining friends
}
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    cout << friendPairing(n);
    return 0;
}
