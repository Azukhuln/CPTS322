#include <iostream>
using namespace std;
typedef string;
class course
{
public:
	course(string newName, string newNumber, string newSemester, double newGrade)
	{
		name = newName;
		number = newNumber;
		semester = newSemester;
		grade = newGrade;
	}
	void addAssign() //Nicholas was working on this
	{

	}
	void computeGrade() //Nicholas was also working on this
	{
		
	}
private:
	string name;
	string number;
	string semester;
	double grade;
	/*assignment assignArr[]; whoever is doing the assignment class works on this*/
};
class mainMenu
{
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
		course newCourse(courseName, courseNumber, courseSemester, 0.0);
		/*store in csv*/
	}
	void removeCourse()
	{
		string courseString, confirm;
		cout << "Enter course name or number to remove course" << endl;
		cin >> courseString;
		cout << "Are you sure you want to remove this course (Y/N)? " << endl;
		cin >> confirm;
	}
private:
	/*put list of courses here*/
};
};
