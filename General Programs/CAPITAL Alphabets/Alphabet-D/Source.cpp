#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int size;

	cout << "Enter the size for the pattern 'D' (Integer greater than 4)?\t";
	cin >> size;

	while (size < 5)
	{
		cout << "Invalid Input...\nEnter the size for the pattern 'D' (Integer greater than 4)?\t";
		cin >> size;
	}

	cout << endl;

	for (int i = 1; i <= size; i++)
	{
		cout << setw(40 - 22);				// (Not necessary) for moving CROSS in the centre of console
		if (i == 1 || i == size)
		{
			for (int y = 1; y <= 3; y++)
				cout << "*";
		}
		else if (i == 2 || i == size - 1)
		{
			cout << "*";
			for (int y = 1; y <= 2; y++)
				cout << " ";
			cout << "*";
		}
			else
		{
			cout << "*";
			for (int y = 1; y <= 3; y++)
				cout << " ";
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}