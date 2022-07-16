#include <iostream>
using namespace std;
string moveXend(string s)
{
    if (s.length() == 0)
        return "";
    string restString = moveXend(s.substr(1));
    if (s[0] == 'x')
        return restString + s[0];
    else
        return s[0] + restString;
}
int main(int argc, char const *argv[])
{
    cout << moveXend("axdxsdgxxjusyh") << endl;
    return 0;
}
