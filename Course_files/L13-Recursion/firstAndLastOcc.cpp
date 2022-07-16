#include <iostream>
using namespace std;
int firstOccurrence(int arr[], int n, int i, int key)
{
    if (i == n)
        return -1;
    if (arr[i] == key)
        return i;
    return firstOccurrence(arr, n, i + 1, key);
}
int lastOccurrence(int arr[], int n, int i, int key)
{
    if (i == n)
        return -1;
    int restArr = lastOccurrence(arr, n, i + 1, key);
    if (restArr != -1)
        return restArr;
    if (arr[i] == key)
        return i;
    else
        return -1;
}
int main(int argc, char const *argv[])
{
    int arr[7] = {4, 2, 1, 2, 5, 2, 7};
    cout << firstOccurrence(arr, 7, 0, 2) << endl;
    cout << lastOccurrence(arr, 7, 0, 2) << endl;
    return 0;
}
