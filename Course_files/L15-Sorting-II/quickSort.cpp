#include <iostream>
using namespace std;
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void swap(int arr[], int a, int b)
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}
int partition(int arr[], int l, int r)
{
    int pivot = arr[r];
    int i = l - 1;
    for (int j = l; j < r; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr, i, j);
        }
    }
    swap(arr, i + 1, r);
    return i + 1;
}
void quickSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int pi = partition(arr, l, r);
        quickSort(arr, l, pi - 1);
        quickSort(arr, pi + 1, r);
    }
}
int main(int argc, char const *argv[])
{
    int arr[] = {6, 3, 9, 5, 2, 8, 7};
    quickSort(arr, 0, 6);
    printArray(arr, 7);
    return 0;
}
