#include <iostream>
using namespace std;
void replacePI(string s)
{
    if (s == "") // base condition
        return;
    if (s[0] == 'p' && s[1] == 'i')
    {
        cout << "3.14";
        replacePI(s.substr(2));
    }
    else
    {
        cout << s[0];
        replacePI(s.substr(1));
    }
}
int main(int argc, char const *argv[])
{
    string s;
    cin >> s;
    replacePI(s);
    return 0;
}
