#ifndef COURSE_H_
#define COURSE_H_
#include <string>
using namespace std;

class Course
{
public:
	Course(const string& courseName, int capacity);
	~Course();
	Course(const Course&);		//homework specification
	string getCourseName() const;
	void addStudent(const string& name, const Course& course);
	void dropStudent(const string& name);
	string* getStudents() const;
	int getNumberOfStudents() const;
private:
	string courseName;
	string* students;
	int numberOfStudents;
	int capacity;
};
#endif