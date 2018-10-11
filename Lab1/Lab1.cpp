// Lab1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "time.h"

using namespace std;

int main()
{
	srand(time(NULL));
	int number;
	number = rand() % 1000 + 1;
	int guess;
	
	do {
		cout << "Enter Guess: ";
		cin >> guess;

		if (guess < number)

			cout << "Your guess is less than the number chosen" << endl;

		else if (guess > number)

			cout << "Your guess is more than the number chosen" << endl;

		else

			cout << "Your guess is correct!" << endl;
	}
	while (guess != number);

	system("PAUSE");
    return 0;
}

