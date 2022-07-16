#include <iostream>
using namespace std;
void subset(char set[], int n)
{
    for (int i = 0; i < (1 << n); i++) //(1<<n)===2^n
    {
        cout << "{ ";
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j)) // checking if the j th position in i is set
            {
                cout << set[j] << " ";
            }
        }
        cout << "}\n";
    }
}
int main(int argc, char const *argv[])
{
    char set[4] = {'a', 'b', 'c', 'd'};
    subset(set, 4);
    return 0;
}
