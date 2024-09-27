/*
TITLE: Chapter 4 Exercise 10 - Days In A Month
FILE NAME: Chapter4Ex10_DAngeloFrancis
PROGRAMMER: D'Angelo Francis
DATE: 10/26/24
REQUIREMENTS: Write a program that asks the user to enter the month 
(letting the user enter an integer in the range of 1 through 12) and the year. 
The program should then display the number of days in that month. 
Use the following criteria to identify leap years:

1. Determine whether the year is divisible by 100. If it is, then it is a leap year if and only if it is 
divisible by 400. For example, 2000 is a leap year but 2100 is not.

2. If the year is not divisible by 100, then it is a leap year if and only if it is divisible by 4. 
For example, 2008 is a leap year but 2009 is not.

*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int month;
	int year;
	int days = 0;

	// entering the year
	cout << "Enter the year: ";
	cin >> year;
	cout << endl;

	// entering the month
	cout << "Enter the month (1-12): ";
	cin >> month;
	cout << endl;

	// testing if the year is a leap year or not
	bool leapYear = false;
	if (year % 100 == 0)
	{
		if (year % 400 == 0)
			leapYear = true;
	}
	else if (year % 4 == 0)
	{
		leapYear = true;
	}

	switch (month)
	{
	// feburary is affected by the leap year
	case 2:
		if (leapYear == true)
		{
			days = 29;
		}
		else
		{
			days = 28;
		}
		break;

	// months that have 31 days
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		days = 31;
		break;

	//months that have 30 days
	case 4:
	case 6:
	case 9:
	case 11:
		days = 30;
		break;

	// if the user inputs an invalid number
	default: 
		cout << "Invalid month. You can only enter a value between 1 and 12.";
		return 0;
	}

	// shows the days in the month
	cout << "There are " << days << " days in this month.";

	return 0;
}