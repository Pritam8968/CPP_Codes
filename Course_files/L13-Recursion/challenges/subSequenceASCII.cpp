#include <iostream>
using namespace std;
void subSeqASCII(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    char c = s[0];
    int code = c;
    string restStr = s.substr(1);
    subSeqASCII(restStr, ans);
    subSeqASCII(restStr, ans + c);
    subSeqASCII(restStr, ans + to_string(code));
}
int main(int argc, char const *argv[])
{
    string s;
    cin >> s;
    subSeqASCII(s, "");
    return 0;
}
