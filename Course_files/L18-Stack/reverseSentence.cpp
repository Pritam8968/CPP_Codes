#include <iostream>
#include <stack>
using namespace std;
void reverseSentence(string &sentence)
{
    stack<string> st;
    for (int i = 0; i < sentence.length(); i++)
    {
        string word = "";
        while (sentence[i] != ' ' && i < sentence.length())
        {
            word += sentence[i];
            i++;
        }
        st.push(word);
    }
    sentence = "";
    while (!st.empty())
    {
        sentence += st.top() + " ";
        st.pop();
    }
}
void reverseString(string &s)
{
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        st.push(s[i]);
    }
    s = "";
    while (!st.empty())
    {
        s += st.top();
        st.pop();
    }
}
int main(int argc, char const *argv[])
{
    string sentence = "Hey, how are you doing?";
    reverseSentence(sentence);
    cout << sentence << endl;
    string s = "pneumonoultramicroscopicsilicovolcanoconiosis";
    reverseString(s);
    cout << s << endl;
    return 0;
}
