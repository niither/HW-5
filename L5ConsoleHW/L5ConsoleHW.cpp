#include <iostream>
using namespace std;

int main()
{
	srand(time(0));

	// Task 1
	int sum = 0;

	for (int i = 0; i <= 10; i++)
	{
		sum += i;
	}
	cout << sum << "\n\n";

	// Task 2
	int rangeMin;
	int rangeMax;

	cout << "Enter range in Celcius:\n";
	cin >> rangeMin;
	cin >> rangeMax;

	for (int i = rangeMin; i <= rangeMax; i++)
	{
		cout << i << "C = " << i * 1.8 + 32 << "F\n";
	}
	cout << "\n";

	// Task 3
	int posNum = 0, negNum = 0, nullNum = 0, evenNum = 0, oddNum = 0, randomNum;

	for (int i = 0; i <= 100; i++)
	{
		randomNum = rand() % 201 - 100;
		
		if (randomNum > 0)
		{
			posNum++;
		}
		else if (randomNum < 0)
		{
			negNum++;
		}
		else
		{
			nullNum++;
		}
		randomNum % 2 == 0 ? evenNum++ : oddNum++;
	}
	cout << "Positive numbers: " << posNum << "%\n";
	cout << "Negative numbers: " << negNum << "%\n";
	cout << "Nulls: " << nullNum << "%\n";
	cout << "Even numbers: " << evenNum << "%\n";
	cout << "Odd numbers: " << oddNum << "%\n\n";

	// Task 4
	long long int num4;
	int factorial = 1;

	cout << "Enter a number: ";
	cin >> num4;

	for (int i = 1; i <= num4; i++)
	{
		factorial *= i;
	}
	cout << num4 << "! = " << factorial << "\n\n";

	// Task 5
	int num5;
	int digitCount = 0;
	int digitSum = 0;

	cout << "Enter a number: ";
	cin >> num5;

	if (num5 == 0)
	{
		digitCount = 1;
		digitSum = 0;
	}
	else
	{
		while (num5 > 0)
		{
			digitSum += num5 % 10;
			digitCount++;
			num5 /= 10;
		}
	}

	cout << "Digit sum: " << digitSum << "\nDigit count: " << digitCount << "\n\n";

	// Task 6
	int num6;

	cout << "Enter a number: ";
	cin >> num6;

	for (int i = num6; i > 0; i--)
	{
		if (num6 % i == 0)
		{
			cout << i << "\n";
		}
		else
		{
			continue;
		}
	}
	cout << "\n";

	// Task 7
	int num7;
	int divCount = 0;

	cout << "Enter a number: ";
	cin >> num7;

	for (int i = num7; i > 0; i--)
	{
		if (num7 % i == 0)
		{
			divCount++;
		}
		else
		{
			continue;
		}
	}
	divCount < 3 ? cout << num7 << " is simple\n\n" : cout << num7 << " is NOT simple\n\n";

	// Task 8
	int num8;
	int prevDigit = -1;
	bool sameDigits = false;

	cout << "Enter a number: ";
	cin >> num8;

	while (num8 > 0)
	{
		int currentDigit = num8 % 10;

		if (currentDigit == prevDigit)
		{
			sameDigits = true;
			break;
		}

		prevDigit = currentDigit;
		num8 /= 10;
	}

	sameDigits ? cout << "Number has same digits in a row\n\n" : cout << "Number does NOT have same digits in a row\n\n";

	// Task 9
	int num9, original, reversed = 0;

	cout << "Enter a number: ";
	cin >> num9;

	original = num9;

	while (num9 > 0)
	{
		reversed = reversed * 10 + num9 % 10;
		num9 /= 10;
	}

	if (original == reversed)
	{
		cout << "Number is a palindrom\n\n";
	}
	else
	{
		cout << "Number is NOT a palindrom\n\n";
	}
}