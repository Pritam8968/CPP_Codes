#include <iostream>
using namespace std;
void printIncreasing(int n)
{
    if (n == 0)
        return;
    printIncreasing(n - 1);
    cout << n << " ";
}
void printDecreasing(int n)
{
    if (n == 0)
        return;
    cout << n << " ";
    printDecreasing(n - 1);
}
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    cout << "Increasing: ";
    printIncreasing(n);
    cout << endl;
    cout << "Decreasing: ";
    printDecreasing(n);
    return 0;
}
