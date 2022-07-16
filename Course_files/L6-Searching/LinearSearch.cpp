#include "iostream"
using namespace std;
int linearSearch(int arr[], int n, int key)
{
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            index = i + 1;
            break;
        }
    }
    if (index == -1)
    {
        cout << key << " is not present in the list.";
    }
    else
        cout << key << " is at index: " << index;
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
    linearSearch(arr, n, key);
}