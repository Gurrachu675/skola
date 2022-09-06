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

	std::vector<Student> students;
	std::vector<std::string> schoolClasses;
};


