#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    char arr[n + 1];
    cin >> arr; // valid only for words. to make it working for sentences use cin.getline(arr,n)
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            cout << arr[i] << " ";
            flag = false;
            break;
        }
    }
    if (flag)
        cout << "Palindrome\n";
    else
        cout << "not Palindrome\n";
    return 0;
}
