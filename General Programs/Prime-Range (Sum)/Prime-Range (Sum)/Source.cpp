/*Program for displaying all PRIME numbers, their sum and quantity(amount) within SPECIFIED RANGE*/

#include<iostream>
using namespace std;
int main()
{
	int i, j, num1, num2, count = 0,sum=0;
	bool a = 0;								//flag variable
	
	cout << "Please enter only non-negative Numbers:\n";
	cout << "Enter starting number?\t";
	cin >> num1;
	cout << "Enter ending number?\t";
	cin >> num2;
	
	while (num1 < 0 || num2 < 0)
	{
		cout << "Please enter only non-negative Numbers:\n";
		cout << "Enter starting number?\t";
		cin >> num1;
		cout << "Enter ending number?\t";
		cin >> num2;
	}
	
	for (j = num1; j <= num2; j++)
	{
		if (j == 0 || j == 1)
			continue;
		for (i = 2; i < j; i++)
		{
			if (j % i == 0)
			{
				a = 1;
				break;
			}
		}
		if (a != 1 || j == 2)
		{
			cout << j << " is a Prime Number\n";
			sum = sum + j;
			count++;
		}
		a = 0;
	}

	cout << "Total Prime numbers in Entered Range is \t" << count << endl;
	cout << "Sum of all Prime numbers in Entered Range is \t" << sum << endl;
	
	return 0;
}