#include <iostream>
using namespace std;

int grade;

void letterGrade() {
	if (100 >= grade && 80 >= grade)
	{
		cout << "You got an A+!" << endl;
	}
	else if (79 >= grade && grade >= 70)
	{
		cout << "You got an A!" << endl;
	}
	else if (69 >= grade && grade >= 60)
	{
		cout << "You got an B!" << endl;
	}
	else if (59 >= grade && grade >= 50)
	{
		cout << "You got an C!" << endl;
	}
	else if (49 >= grade && grade >= 40)
	{
		cout << "You got an D!" << endl;
	}
	else if (39 >= grade && grade >= 1)
	{
		cout << "You got an F!" << endl;
	}
	else if (grade == 0)
	{
		cout << "You got a U!" << endl;
	}
	else
	{
		cout << "You did not enter a valid grade" << endl;
	}
}

int main()
{
	cout << "Enter grade scored (on a scale of 0 to 100):" << endl;
	cin >> grade;

	if (cin.fail())
	{
		cout << "You did not enter a numerical value" << endl;
	}
	else
	{
		letterGrade();
	}

	
}

