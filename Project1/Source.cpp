#include <iostream>
using namespace std;

int main()
{
	int age;
	float ticketPrice;

	cout << "Age? ";
	cin >> age;

	if (age < 13)
	{
		ticketPrice = 5.00;
	}
	else
	{
		ticketPrice = 7.00;
	}

	cout << "Ticket price: " << ticketPrice << endl;

	while (true) {} // temp - don't let program quit.

	return 0;
}

//What is the scope of your age variable?     all integers
//What is the scope of your ticket price variable?     float type  represent values dwith a precision of seven digits