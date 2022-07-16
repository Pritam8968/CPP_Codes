#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    // Different ways to declare
    // 1.
    string str;
    cin >> str;
    cout << str << endl;
    // 2. if we need same character multiple times
    string str1(5, 'm');
    cout << str1 << endl;
    // 3.
    string str2 = "HelloWorld";
    cout << str2 << endl;
    // 4. input with spaces
    /*string str3;
    cin.ignore(); // used to clear the buffer;
    getline(cin, str3);
    cout << str3 << endl;*/
    // Append
    string s1 = "fam";
    string s2 = "ily";
    s1.append(s2);
    // or
    s1 = s1 + s2;
    cout << s1 << endl;
    // clearing a string
    string abc = "kndsbjbabajbjbhjvan,k vagubaj gurgfb v v";
    abc.clear();
    // compare ( if same: 0 else 1)
    string st1 = "abc";
    string st2 = "xy";
    string st3 = "xyz";
    cout << st2.compare(st1) << " " << st3.compare(st2) << endl;
    // delete
    string el = "nincompoop";
    el.erase(3, 3); //(starting index and number of char)
    cout << el << endl;
    // find
    cout << el.find("oo") << endl; // returns starting index
    // insert
    el.insert(2, "lol");
    cout << el << endl;
    // length
    cout << el.size() << " === " << el.length() << endl;
    // substring
    string sub = el.substr(3, 4); // starting index, number of char
    cout << sub << endl;
    // Type conversion
    string intstr = "786";
    cout << intstr << endl;
    cout << stoi(intstr) + 2 << endl; // string -> integer
    int num = 125478;
    string numstr = to_string(num);
    cout << numstr + "2" << endl;
    // sorting
    string suffled = "bdugujbvjgusvhafyugavbjbyuusgvw";
    sort(suffled.begin(), suffled.end());
    cout << suffled << endl;
    return 0;
}
