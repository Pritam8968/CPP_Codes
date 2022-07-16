#include "iostream"
using namespace std;
int main(int argc, char const *argv[])
{
    int n, reverse = 0;
    cin >> n;
    while (n > 0) // This is not applicable for 0 starting numbers
    {
        int lastDigit = n % 10;
        reverse = reverse * 10 + lastDigit;
        n /= 10;
    }
    cout << reverse << endl;
    // for 0 starting numbers
    // while (n > 0)
    // {
    //     int lastDigit = n % 10;
    //     cout << lastDigit;
    //     n /= 10;
    // }
    return 0;
}
