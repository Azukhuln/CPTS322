#include <iostream>
using namespace std;
typedef string;
class course
{
public:
	void addAssign()
	{

	}
	void computeGrade()
	{
		
	}
private:
	string name;
	string number;
	string semester;
	double grade;
	//assignment assignArr[]; whoever is doing the assignment class works on this
};

class user
{

};

class student: public user
{
	
};

class teacher : public user
{
private:
	course courseArr[100];
public:
	void addCourse()
	{
		string courseName, courseNumber, courseSemester;
		cout << "Enter name of course" << endl;
		cin >> courseName;
		cout << "Enter course number" << endl;
		cin >> courseNumber;
		cout << "Enter course semester" << endl;
		cin >> courseSemester;
	}
	void removeCourse()
	{
		string courseString, confirm;
		cout << "Enter course name or number to remove course" << endl;
		cin >> courseString;
		cout << "Are you sure you want to remove this course (Y/N)? " << endl;
		cin >> confirm;
		
	}
};
