#include <iostream>
using namespace std;
int numOfOne(int n)
{
    int count = 0;
    while (n)
    {
        n = n & n - 1;
        count++;
    }
    return count;
}
int main(int argc, char const *argv[])
{
    int n = 19;
    cout << numOfOne(n);
    return 0;
}
