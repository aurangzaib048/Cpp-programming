#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int size;
	cout << "Enter the size for the pattern 'Q' (Integer greater than 4)?\t";
	cin >> size;

	while (size < 5)
	{
		cout << "Invalid Input...\nEnter the size for the pattern 'Q' (OInteger greater than 4)?\t";
		cin >> size;
	}

	cout << endl;

	for (int i = 1; i <= size; i++)
	{
		cout << setw(40 - size / 2);				// (Not necessary) for moving CROSS in the centre of console
		if (i == 1 || i == size)
		{
			cout << " ";
			cout << " ";
			for (int y = 1; y <= size - 4; y++)
				cout << "*";
		}
		else if (i == 2 || i == size - 1)
		{
			cout << " ";
			cout << "*";
			for (int y = 1; y <= size - 4; y++)
				cout << " ";
			cout << "*";
		}
		else
		{
			cout << "*";
			if (i == size - 2)
			{
				for (int y = 1; y <= size - 4; y++)
					cout << " ";
				cout << "* *";
			}
			else
			{
				for (int y = 1; y <= size - 2; y++)
					cout << " ";
				cout << "*";
			}
			

		}
		if (i == size)
			cout << " ***";
		cout << endl;
	}

	return 0;
}