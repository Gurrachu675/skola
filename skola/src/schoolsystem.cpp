#include "schoolsystem.h"

void Schoolsystem::run()
{
	while (true)
	{
		std::cout << "type 1 if you want to add person" << "\n";
		std::cout << "type 2 if you want to add a new class" << "\n";
		std::cout << "type 3 if you want to add person to an existing class" << "\n";
		std::cout << "type 4 if you want to check if a person is in the system" << "\n";
		std::cout << "type 5 if you want to get information of a specific person" << "\n";
		std::cout << "type 6 if you want to remove a person from a class" << "\n";
		std::cout << "type 7 if you want to remove a person from the system" << "\n";
		std::cout << "type 8 if you want to get the names of the students in a class" << "\n";
		
		int input;
		std::cin >> input;

		switch (input) 
		{
		case 1:
			addStudent();
			break; 
		case 2:
			addNewClass();
			break; 
		case 3:
			addPerToClass();
			break;
		case 4:
			perCheckSystem();
			break;
		case 5:
			perInformation();
			break;
		case 6:
			removeStudent();
			break;
		case 7:
			removeStudent2();
			break;
		case 8:
			getAllPerInClass();
			break;
		}
	}
}
//en funktion som kollar om klassen(className) existerar
bool Schoolsystem::classExists(std::string className) 
{
	for (auto& i : schoolClasses)
	{
		if (className == i)
		{
			return true;
		}
	}

	return false;
}
//en funktion som lägger till en elev i systemet
void Schoolsystem::addStudent()
{
	std::string nameInput;
	int ageInput;
	Student student;

	std::cout << "what is the new students name" << "\n";
	std::cin >> nameInput; 
	student.name = nameInput;
	std::cout << "how old is the student" << "\n";
	std::cin >> ageInput;
	student.age = ageInput;

	students.push_back(student);
}
//en funktion som tar bort en elevens klass
void Schoolsystem::removeStudent()
{
	std::string nameInput;

	std::cout << "enter the name of the peron that you want to remove from class" << "\n";
	std::cin >> nameInput;
	for (auto& i : students)
	{
		if (nameInput == i.name)
		{
			i.className = "";
			break;
		}
	}
}
//en funktion som tar bort en person helt från systemet
void Schoolsystem::removeStudent2()
{
	std::string nameInput;

	std::cout << "enter students name" << "\n";
	std::cin >> nameInput; 

	for (int i = 0; i < students.size(); i++) {
		if (nameInput == students[i].name) {
			std::cout << "remove " << students[i].name;
			students.erase(students.begin() + i);
			break;
		}
	}
}
//en funktion som skapar en klass
void Schoolsystem::addNewClass()
{
	std::string className;
	std::cout << "whats the new class name" << "\n";
	std::cin >> className;
	schoolClasses.push_back(className);
}
//en funktion som kollar om en person finns i systemet
void Schoolsystem::perCheckSystem()
{
	std::string studentName;
	std::cout << "what is the student name" << "\n";
	std::cin >> studentName;
	for (auto& i : students)
	{
		if (studentName == i.name)
		{
			std::cout << "person exist in the system" << "\n";
			return;
		}
	}

	std::cout << "person does not exist in the system" << "\n";
}
//en funktion som skriver ut information om en person i systemet
void Schoolsystem::perInformation()
{
	std::string studentName;
	std::cout << "what is the students name that you want information of" << "\n";
	std::cin >> studentName;
	for(auto i : students)
	{
		if (studentName == i.name)
		{
			std::cout << "name: " << i.name << "\n";
			std::cout << "age: " << i.age << "\n";
			std::cout << "class: " << i.className << "\n";
			break;
		}
	}

}
//en funktion som skriver ut alla personer i en klass
void Schoolsystem::getAllPerInClass()
{
	std::string className;
	std::cout << "what is the class name" "\n";
	std::cin >> className;

	if (!classExists(className)) {
		std::cout << "could not find class";
		return;
	}

	for (auto &i : students)
	{
		if (i.className == className)
		{
			std::cout << "name:" << i.name << "\n";
		}
	}
}
//en funktion som lägger till en exsisterande person i en exsisternade klass
void Schoolsystem::addPerToClass()
{
	std::string studentNameInput;
	std::string classNameInput;
	std::cout << "what is the class name" << "\n";
    std::cin >> classNameInput;

	if (!classExists(classNameInput)) {
		std::cout << "could not find class";
		return;
	}

	std::cout << "what is the students name that you want to add to the class" << "\n";
	std::cin >> studentNameInput;
	for (auto& i : students)
	{
		if (studentNameInput == i.name)
		{
			i.className = classNameInput;
			break;
		}
	}
}
