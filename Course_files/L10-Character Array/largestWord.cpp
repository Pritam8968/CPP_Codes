#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    cin.ignore();
    char sentence[n + 1];
    cin.getline(sentence, n + 1);
    int i = 0;
    int currLen = 0, maxLen = 0;
    int idx = 0, maxIdx = 0;
    while (1)
    {
        if (sentence[i] == ' ' || sentence[i] == '\0')
        {
            if (maxLen < currLen)
            {
                maxLen = currLen;
                maxIdx = idx;
            }
            currLen = 0;
            idx = i + 1;
        }
        else
            currLen++;
        if (sentence[i] == '\0')
            break;
        i++;
    }
    cout << maxLen << endl;
    for (int i = maxIdx; i < maxIdx + maxLen; i++)
    {
        cout << sentence[i];
    }

    cout << endl;
    return 0;
}
