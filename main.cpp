#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;

class Assignment
{
public:
Assignment();
int getGrade();

private:
	string name;
	int grade;
	string comment;
};

Assignment::Assignment() {
	printf("Name the assignment \n");
	std::cin >> name;
	this->name = name;
	printf("Grade the assignment (in percent) \n");
	std::cin >> grade;
	this->grade = grade;
	printf("Comment on the assignment \n");
	std::cin >> comment;
	this->comment = comment;
}

int Assignment::getGrade() {
	return grade;
}

double coursegrade(std::vector<Assignment> x) {
	double grade = 0;
	int i = 0;
	for (;i < x.size(); i++) {
		grade += x[i].getGrade();
}
	grade = grade / i;
	return grade;
}

int main(void)
{
	std::vector<Assignment> myassignments;

	Assignment a = Assignment();

	myassignments.push_back(a);

	double b = coursegrade(myassignments);

	std::cout << b;
}