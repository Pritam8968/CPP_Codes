#include <iostream>
using namespace std;
void permutation(string s, string ans)
{
	if (s.length() == 0)
	{
		cout << ans << endl;
		return;
	}
	for (int i = 0; i < s.length(); i++)
	{
		char c = s[i];									   // fixing one char
		string restStr = s.substr(0, i) + s.substr(i + 1); // rest of the string after removing fixed char
		permutation(restStr, ans + c);					   // recursive call
	}
}
int main(int argc, char const *argv[])
{
	string s;
	cin >> s;
	permutation(s, "");
	return 0;
}
