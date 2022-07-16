#include <iostream>
using namespace std;
bool isSorted(int arr[], int n)
{
    if (n == 1)
        return true;
    bool restArr = isSorted(arr + 1, n - 1); // arr+1 moves the pointer to next index
    return (arr[0] < arr[1]) && restArr;
}
int main(int argc, char const *argv[])
{
    int arr[6] = {1, 2, 3, 4, 6, 5};
    cout << isSorted(arr, 6);
    return 0;
}
