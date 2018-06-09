#include <iostream>
#include "Course.h"
using namespace std;

//16/20

Course::Course(const string& courseName, int capacity)
{
	numberOfStudents = 0;
	(*this).courseName = courseName;
	(*this).capacity = capacity;
	students = new string[capacity];
}

Course::~Course()
{
	delete[] students;
}

string Course::getCourseName() const
{
	return courseName;
}

void Course::addStudent(const string& name, const Course& course)
{
	if (numberOfStudents == capacity)
	{
		capacity = capacity + 5;
		//PT -- instead of creating a new course (which won't work the way you'd like), just reallocate students
		// -2
		/*
		string* temp = new string[capacity];
		for (int i=0; i<numberOfStudents; i++) {
			temp[i] = students[i];
		}
		delete[] students;
		students = temp;
		*/
		Course newCourse(course);
		delete &course;
	}
	students[numberOfStudents] = name;
	numberOfStudents++;
}

void Course::dropStudent(const string& name)
{
	for (int i = 0; i < numberOfStudents; i++)
	{
		if (students[i] == name)
		{
			for (int j = i; j < numberOfStudents; i++)
				students[j] = students[j + 1];
			i = numberOfStudents;
		}
		students[numberOfStudents] = "";
	}
	numberOfStudents--;
}

string* Course::getStudents() const
{
	return students;
}

int Course::getNumberOfStudents() const
{
	return numberOfStudents;
}

Course::Course(const Course& course)		//homework specification
{
	courseName = course.courseName;
	numberOfStudents = course.numberOfStudents;
	capacity = course.capacity;
	students = new string[capacity];
	
	//PT -- copy the students from course to this
	// -2
	/*
	for (int i=0; i<course.getNumberOfStudents(); i++) {
		students[i] = course.getStudents()[i];
	}
	*/
}
