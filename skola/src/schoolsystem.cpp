#include "schoolsystem.h"

void Schoolsystem::run()
{
	int counter = 0;
	while (true)
	{
		int input;
		std::cout << "type 1 if you want to add persson" << "\n"; 
		std::cout << "type 2 if you want to add a new class" << "\n";
		std::cout << "type 3 if you want to add persson to an existing schoolclass" << "\n";
		std::cout << "type 4 if you want to check if a persson is in the system" << "\n";
		std::cout << "type 5 if you want to get information of a spesific person" << "\n";
		std::cout << "type 6 if you want to remove a person from a class" << "\n";
		std::cout << "type 7 if you want to remove a person from the system" << "\n";
		std::cout << "type 8 if you want to get the names of the persons in a class" << "\n";
		std::cin >> input;
		switch (input) 
		{
		case 1:
			"1";
			addStudent();
			break; 
		case 2:
			"2";
			addNewClass();
			break; 
		case 3:
			"3";
			addPerToClass();
			break;
		case 4:
			"4";
			perCheckSystem();
			break;
		case 5:
			"5";
			perInformation();
			break;
		case 6:
			"6";
			removeStudent();
			break;
		case 7:
			"7";
			removeStudent2();
			break;
		case 8:
			"8";
			getAllPerInClass();
			break;


		

		}
	}
}

void Schoolsystem::addStudent()
{
	std::string nameInput;
	int ageInput;
	Student student;
	for (auto i : students)
	std::cout << "what is the new students name" << "\n";
	std::cin >> nameInput; 
	student.name = nameInput;
	std::cout << "how old is the student" << "\n";
	std::cin >> ageInput;
	student.age = ageInput;
	students.push_back(student);
	std::cout << student.age << "\n";
	std::cout << student.name << "\n";
}

void Schoolsystem::removeStudent()
{
}
void Schoolsystem::removeStudent2()
{
}
void Schoolsystem::addNewClass()
{
}

void Schoolsystem::perCheckSystem()
{
}

void Schoolsystem::perInformation()
{
}

void Schoolsystem::getAllPerInClass()
{
}

void Schoolsystem::addPerToClass()
{
}
