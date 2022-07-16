#include <iostream>
using namespace std;
bool isPowerof2(int n) { return (n && !(n & n - 1)); }
int main(int argc, char const *argv[])
{
    cout << isPowerof2(16);
    return 0;
}
