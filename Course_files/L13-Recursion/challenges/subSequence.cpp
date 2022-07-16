#include <iostream>
using namespace std;
string subSeq(string s, string ans)
{
	if (s.length() == 0)
	{
		cout << ans << endl;
		return "";
	}
	char ch = s[0];
	string restStr = s.substr(1);
	subSeq(restStr, ans);
	subSeq(restStr, ans + ch);
}
int main(int argc, char const *argv[])
{
	subSeq("ABC", "");
	return 0;
}
