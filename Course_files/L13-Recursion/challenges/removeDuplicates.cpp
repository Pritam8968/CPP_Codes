// Only valid for strings with subsequent duplicates
#include <iostream>
using namespace std;
string removeDup(string s)
{
    if (s.length() == 0)
        return "";
    string restStr = removeDup(s.substr(1));
    if (s[0] == restStr[0])
        return restStr;
    else
        return s[0] + restStr;
}
int main(int argc, char const *argv[])
{
    string s = "aaafffffssssshhhhhhuufrjjj";
    cout << removeDup(s);
    return 0;
}
