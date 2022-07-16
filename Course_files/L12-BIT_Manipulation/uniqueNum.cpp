#include <iostream>
using namespace std;
int uniqueNum(int arr[], int n)
{
    int unique = 0;
    for (int i = 0; i < n; i++)
    {
        unique = unique ^ arr[i]; // bitwise XOR sum of all the elements give the unique number
    }
    return unique;
}
int main(int argc, char const *argv[])
{
    int arr[] = {2, 4, 6, 3, 4, 6, 2};
    cout << uniqueNum(arr, 7);
    return 0;
}
