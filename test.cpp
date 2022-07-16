#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, maxDifference = 0;
        cin >> n;
        int array_a[n], array_b[n], diffArray[n];
        for (int i = 0; i < n; i++)
        {
            cin >> array_a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> array_b[i];
        }
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            diffArray[i] = array_a[i] - array_b[i];
            maxDifference = max(maxDifference, diffArray[i]);
            if (diffArray[i] < 0)
            {
                flag = false;
                break;
            }
        }
        if (!flag)
        {
            cout << "NO" << endl;
            continue;
        }
        for (int i = 0; i < n; i++)
        {
            if((array_a[i]-maxDifference<0 and array_b[i]==0) or (array_a[i]-maxDifference==array_b[i])  ) continue;
            else
            {
            flag=false;
            break;
            } 
        }
        if (!flag)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
