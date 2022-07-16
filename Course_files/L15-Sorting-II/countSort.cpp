#include <iostream>
using namespace std;
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void countSort(int arr[], int n)
{
    int k = arr[0]; // k is the max element of the array
    for (int i = 0; i < n; i++)
    {
        k = max(k, arr[i]);
    }
    int count[10] = {0};
    for (int i = 0; i < n; i++) // count array
    {
        count[arr[i]]++;
    }
    for (int i = 1; i <= k; i++) // modified count array
    {
        count[i] += count[i - 1];
    }
    int output[n];
    for (int i = n - 1; i >= 0; i--) // placing values at their correct position
    {
        output[--count[arr[i]]] = arr[i];
    }
    for (int i = 0; i < n; i++) // copy sorted array to original array
    {
        arr[i] = output[i];
    }
}
int main(int argc, char const *argv[])
{
    int arr[] = {1, 4, 6, 3, 2, 3, 1};
    countSort(arr, 7);
    printArray(arr, 7);
    return 0;
}
