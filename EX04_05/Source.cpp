#include <iostream>
#include "Course.h"
using namespace std;

int main()
{
	Course course1("Data Structures", 10);

	course1.addStudent("Peter Jones",course1);
	course1.addStudent("Crungle McDood",course1);
	course1.addStudent("Anne Hathie",course1);

	course1.dropStudent("Peter Jones");

	cout << "Number of students in course1: " << course1.getNumberOfStudents() << "\n";
	string* students = course1.getStudents();
	for (int i = 0; i < course1.getNumberOfStudents(); i++)
		cout << students[i] << ", ";

	return 0;
}