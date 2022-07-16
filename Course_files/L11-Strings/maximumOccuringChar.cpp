#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    string s = "abcdefghijklmnopabcdabcfvgdsetyvcgjnbgjttttttttt";
    int freq[26];
    fill(freq, freq + 26, 0);
    for (int i = 0; i < s.length(); i++)
        freq[s[i] - 'a']++;
    char ans = 'a';
    int maxF = 0;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > maxF)
        {
            maxF = freq[i];
            ans = 'a' + i;
        }
    }
    cout << ans << " has occurred maximum times i.e. " << maxF << " times." << endl;
    return 0;
}
