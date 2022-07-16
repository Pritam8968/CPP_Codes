/*
Pairs and Reduced form of array
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool myCompare(pair<int, int> p1, pair<int, int> p2) { return p1.first < p2.first; }
int main(int argc, char const *argv[])
{
    pair<int, char> p;
    p.first = 65;
    p.second = 'A';

    /************************************************/

    int arr[] = {10, 16, 7, 14, 3, 12, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    vector<pair<int, int>> v;
    for (int i = 0; i < size; i++)
    {
        v.push_back(make_pair(arr[i], i));
    }
    sort(v.begin(), v.end(), myCompare);
    for (int i = 0; i < size; i++)
    {
        arr[v[i].second] = i;
    }
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    return 0;
}
