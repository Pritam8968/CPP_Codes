#include <iostream>
using namespace std;
string keypad[] = {" ", ".", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
void keypadComb(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    int c = s[0];
    string code = keypad[c - '0'];
    string restStr = s.substr(1);
    for (int i = 0; i < code.length(); i++)
    {
        keypadComb(restStr, ans + code[i]);
    }
}
int main(int argc, char const *argv[])
{
    string s;
    cin >> s;
    keypadComb(s, "");
    return 0;
}
