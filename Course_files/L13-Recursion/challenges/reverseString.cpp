#include <iostream>
using namespace std;
void reverseStr(string s)
{
    if (s == "") // base condition
        return;
    reverseStr(s.substr(1));
    cout << s[0];
}
int main(int argc, char const *argv[])
{
    string s;
    cin >> s;
    reverseStr(s);
    return 0;
}
