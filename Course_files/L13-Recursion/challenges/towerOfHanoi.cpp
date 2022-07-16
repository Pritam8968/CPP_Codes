#include <iostream>
#include <stdlib.h>
using namespace std;
void towerOfHanoi(int n, char from_tower, char aux_tower, char dest_tower)
{
	if (n == 1)
	{
		cout << "\t\t\t\t\t\t\tMove the disc " << n << " from " << from_tower << " to " << dest_tower << endl;
		return;
	}
	// Moving top n-1 discs from tower A to tower B using C
	towerOfHanoi(n - 1, from_tower, dest_tower, aux_tower);
	// Moving n th disc from tower A to tower C
	cout << "\t\t\t\t\t\t\tMove the disc " << n << " from " << from_tower << " to " << dest_tower << endl;
	// Moving top n-1 discs from tower B to tower C using A
	towerOfHanoi(n - 1, aux_tower, from_tower, dest_tower);
}
int main(int argc, char const *argv[])
{
	system("CLS");
	cout
		<< "\n\t\t\t\t\t****************** TOWER OF HANOI ******************\n"
		<< "\t\t\t\t\t____________________________________________________\n";
	cout
		<< "\t\t\t\t\t\t\tA -> Source Tower\n"
		<< "\t\t\t\t\t\t\tB -> Auxiliary Tower\n"
		<< "\t\t\t\t\t\t\tC -> Destination Tower\n";
	cout << "\n\t\t\t\t\t\t\tEnter the number of discs: ";
	int n;
	cin >> n;
	towerOfHanoi(n, 'A', 'B', 'C');
	cout << "\t\t\t\t\t\t\tThe puzzle is solved!!!\n";
	return 0;
}
