#pragma once
#include"student.h"
#include<vector>
#include<iostream>

class Schoolsystem
{
public:
	void run();
	void addStudent();
	void removeStudent();
	void removeStudent2();
	void addNewClass();
	void perCheckSystem();
	void perInformation();
	void getAllPerInClass();
	void addPerToClass(); 

	std::vector<Student> students;
	std::vector<std::string> schoolClasses;
};


