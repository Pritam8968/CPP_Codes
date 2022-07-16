#include <iostream>
using namespace std;
/*Functions*/
// getBit( get the i th bit)
int getBit(int n, int i)
{
    return ((n & (1 << i)) != 0);
} // setBit(set i th bit as 1)
int setBit(int n, int i)
{
    return (n | (1 << i));
}
// clearBit(set i th bit as 0)
int clearBit(int n, int i)
{
    int mask = ~(1 << i); // ~ is bitwise not
    return (n & mask);
}
// updateBit(sets i th bit with the given bit)
int updateBit(int n, int i, int val)
{
    n = clearBit(n, i);      // first clear the i th bit
    return (n | (val << i)); // then set value at the given position
}
int main(int argc, char const *argv[])
{
    int n = 5; // 0101
    cout << getBit(n, 2) << endl;
    cout << setBit(n, 1) << endl;
    cout << clearBit(n, 2) << endl;
    cout << updateBit(n, 1, 1) << endl;

    return 0;
}
