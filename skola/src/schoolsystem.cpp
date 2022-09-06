#include "schoolsystem.h"

void Schoolsystem::run()
{
	int counter = 0;
	while (true)
	{
		
		std::cout << "loop: " << counter << "\n";
		counter++;
	    std::cin.get();
	}
}

void Schoolsystem::addStudent()
{
	Student student;
	student.name = 123;
	student.age = 123,
		students.push_back(student);
}

void Schoolsystem::removeStudent()
{
}
