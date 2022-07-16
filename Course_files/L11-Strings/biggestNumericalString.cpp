#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    string numStr = "13526";
    sort(numStr.begin(), numStr.end(), greater<int>());
    cout << "Biggest number: " << numStr << endl;
    sort(numStr.begin(), numStr.end(), less<int>());
    cout << "Lowest number: " << numStr << endl;
    return 0;
}