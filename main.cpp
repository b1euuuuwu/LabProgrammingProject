#include <iostream>
using namespace std;

struct studentData
{
	int ID;
	int Age;
	float GPA;
	string Class;
	string Name;
};

studentData student[99];
int counter = 0; //array index

void add_student()
{
	addStudent: //goto Label
	cout << "Please enter the following: " << endl;
	cout << "Student ID: "; cin >> student[counter].ID;
	cout << endl;
	cout << "Age: "; cin >> student[counter].Age;
	cout << endl;
	cout << "GPA: "; cin >> student[counter].GPA;
	cout << endl;
	cout << "Class: "; cin >> student[counter].Class;
	cout << endl;
	cout << "Student Name: "; cin >> student[counter].Name;
	cout << endl << endl;

	char more;
	char correct;

	cout << "ID: " << student[counter].ID << endl
			 << "Age: " << student[counter].Age << endl
			 << "GPA: " << student[counter].GPA << endl
			 << "Class: " << student[counter].Class << endl
			 << "Student Name: " << student[counter].Name << endl;
	cout << endl << "Is this data correct? "; cin >> correct;
	if (correct == 'n')
	{
		cout << endl;
		goto addStudent;
	}

	cout << endl << "Would you like to add more student data?(y/n) "; cin >> more;

	while (more == 'y')
	{
		cout << endl << endl;
		counter++;
		goto addStudent;
	}
	cout << endl;
}

int main()
{
	start:
	int choice;

	cout << "Welcome to our student data management system!" << endl << endl
		   << "What would you like to do? " << endl;
	cout << "1. Add student data" << endl
		 	 << "2. Display student data" << endl
		 	 << "3. Search for student by ID" << endl << endl;
	cin >> choice;

	/*
		Make functions to do these tasks:
		1. Add student data
		2. Display student data (Joy and Katarina)
		   a. Opt 1: Sort by name (alphabetically)
		   b. Opt 2: Sort by Age (output choice: ascending or descending?)
		   c. Opt 3: Display unsorted data (Almas)
		3. Search for student data with variable "ID" as input (Almas)
	*/

	switch(choice)
	{
		case 1:
			add_student();
			goto start;
		break;
		case 2:
		/*
			function for sort algorithm
		*/
		case 3:
		/*
			function for search algorithm
		*/
		case 4:
		goto exit;
	}
	exit:
	return 0;
}