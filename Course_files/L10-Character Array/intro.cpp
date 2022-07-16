#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    // declaring a character array
    char arr[] = "Apple";
    /*if we take input the size of the char array as n, we have to declare the array size as n+1*/
    cout << sizeof(arr) << endl; // ans: 6 [5  characters and one '\0'(null)]
    // print char array elements
    int i = 0;
    while (arr[i] != '\0')
    {
        cout << arr[i] << endl;
        i++;
    }
    // printing the whole char array
    cout << arr;
    return 0;
}
