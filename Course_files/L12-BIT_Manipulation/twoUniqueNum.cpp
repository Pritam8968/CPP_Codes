#include <iostream>
using namespace std;
int getBit(int n, int i)
{
    return ((n & (1 << i)) != 0);
}
void twoUniqueNum(int arr[], int n)
{
    int uniqueSum = 0;
    for (int i = 0; i < n; i++)
    {
        uniqueSum = uniqueSum ^ arr[i]; // bitwise XOR sum of all the elements give the unique number
    }
    int tempSum = uniqueSum;
    int pos = -1, lsb = 0;
    while (lsb != 1) // finding the rightmost 1
    {
        lsb = uniqueSum & 1; // checking if the lsb is 1 or 0
        pos++;
        uniqueSum = uniqueSum >> 1; // shifting the uniqueSum to the right so that we can check the next bit
    }
    int unique1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (getBit(arr[i], pos))        // checking if the i th element has 1 at given position
            unique1 = unique1 ^ arr[i]; // unique1 will bw one of the unique numbers after this loop ends
    }
    int unique2 = tempSum ^ unique1;
    cout << "Num1: " << unique1 << "\nNum2: " << unique2 << endl;
}
int main(int argc, char const *argv[])
{
    int arr[] = {2, 4, 6, 7, 5, 4, 6, 2};
    twoUniqueNum(arr, 8);
    return 0;
}