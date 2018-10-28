#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int size, s2;

	cout << "Enter the size for the pattern 'C' (Integer greater than 4)?\t";
	cin >> size;

	while (size < 5)
	{
		cout << "Invalid Input...\nEnter the size for the pattern 'C' (Integer greater than 4)?\t";
		cin >> size;
	}

	s2 = size * 80.0 / 100;
	cout << endl;

	for (int i = 1; i <= size; i++)
	{
		cout << setw(40 - size / 2);				// (Not necessary) for moving CROSS in the centre of console
		if (i == 1 || i == size)
		{
			cout << " ";
			for (int y = 1; y <= s2-1; y++)
				cout << "*";
		}
		else if (i == 2 || i == size - 1)
		{
			cout << "*";
			for (int y = 1; y <= s2 - 1; y++)
				cout << " ";
			cout << "*";
		}
		else
		{
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}