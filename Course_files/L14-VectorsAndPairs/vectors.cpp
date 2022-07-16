#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> v;  // declaring
    v.push_back(1); // initializing
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << endl;

    // it is an iterator pointer
    vector<int>::iterator it;
    for (it = v.begin(); it < v.end(); it++)
        cout << *it << endl;

    for (auto element : v) // element is not an iterator
        cout << element << endl;

    v.pop_back();

    vector<int> v2(3, 20); // means [20,20,20]

    // value swapping
    swap(v, v2);

    for (auto element : v) // element is not an iterator
        cout << element << endl;

    for (auto element : v2) // element is not an iterator
        cout << element << endl;
    return 0;
}