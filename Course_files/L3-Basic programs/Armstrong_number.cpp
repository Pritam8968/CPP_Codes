#include "iostream"
#include "math.h"
using namespace std;
int main(int argc, char const *argv[])
{
    int n, sum = 0;
    cin >> n;
    int original = n; //because n will become 0 after the while loop
    while (n > 0)
    {
        int lastDigit = n % 10;
        sum += pow(lastDigit, 3);
        n /= 10;
    }
    if (sum == original)
    {
        cout << "Armstrong Number" << endl;
    }
    else
    {
        cout << "Not an Armstrong Number" << endl;
    }
    return 0;
}