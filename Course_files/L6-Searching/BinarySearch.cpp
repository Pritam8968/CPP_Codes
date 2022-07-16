#include "iostream"
using namespace std;
int binarySearch(int arr[], int n, int key)
{
    int index = -1, start = 0, end = n - 1, mid;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (key == arr[mid])
        {
            index = mid;
            break;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        else
            start = mid + 1;
    }
    cout << index + 1;
    return 0;
}
int main()
{
    int n;
    cin >> n;
    int arr[n], key;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the key: ";
    cin >> key;
    binarySearch(arr, n, key);
    return 0;
}