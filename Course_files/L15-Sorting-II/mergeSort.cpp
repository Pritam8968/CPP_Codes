#include <iostream>
using namespace std;
void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
void merge(int arr[], int l, int mid, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;

    int a[n1], b[n2]; // creating two temp arrays for the two halves
    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[l + i];
    } // copying the values to the temp arrays
    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[mid + 1 + i];
    }

    int i = 0, j = 0, k = l; // declaring pointer variables
    while (i < n1 && j < n2) // if both arrays have remaining elements
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            i++;
        }
        else
        {
            arr[k] = b[j];
            j++;
        }
        k++;
    }
    while (i < n1) // if only left array has remaining elements
    {
        arr[k] = a[i];
        i++;
        k++;
    }
    while (j < n2) // if only right array has remaining elements
    {
        arr[k] = b[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;      // finding the mid
        mergeSort(arr, l, mid);     // sorting first part
        mergeSort(arr, mid + 1, r); // sorting second part
        merge(arr, l, mid, r);      // merging two sorted halves
    }
}
int main(int argc, char const *argv[])
{
    int arr[] = {4, 5, 6, 1, 2, 7, 5, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr, 0, size - 1);
    printArray(arr, size);
    return 0;
}
