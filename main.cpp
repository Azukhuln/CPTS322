//#include <iostream>
//#include <string>
//#include <vector>
//
//using std::cout;
//using std::cin;
//using std::endl;
//using std::string;
//
//class Assignment
//{
//public:
//Assignment();
//int getGrade();
//
//private:
//	string name;
//	int grade;
//	string comment;
//};
//
//Assignment::Assignment() {
//	printf("Name the assignment \n");
//	std::cin >> name;
//	this->name = name;
//	printf("Grade the assignment (in percent) \n");
//	std::cin >> grade;
//	this->grade = grade;
//	printf("Comment on the assignment \n");
//	std::cin >> comment;
//	this->comment = comment;
//}
//
//int Assignment::getGrade() {
//	return grade;
//}
//
//double coursegrade(std::vector<Assignment> x) {
//	double grade = 0;
//	int i = 0;
//	for (;i < x.size(); i++) {
//		grade += x[i].getGrade();
//}
//	grade = grade / i;
//	return grade;
//}
//
//int main(void)
//{
//	std::vector<Assignment> myassignments;
//
//	Assignment a = Assignment();
//
//	myassignments.push_back(a);
//
//	double b = coursegrade(myassignments);
//
//	std::cout << b;
//}

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Assignment {
public:
    Assignment();
    int getGrade();
    int getMax();
    void editgrade();
    void editcomment();
    void editmax();
  

private:
    string name;
    int max;
    int grade;
    string comment;
};

Assignment::Assignment() {
    cout << "Name the assignment \n";
    getline(cin, name);
    (this->name) = name;

    cout << "Give the maximum point value \n";
    cin >> max;
    (this->max) = max;
    cin.ignore();

    cout << "Give the grade (in points) \n";
    cin >> grade;
    (this->grade) = grade;
    cin.ignore();

    cout << "Comment on the assignment \n";
    getline(cin, comment);
    (this->comment) = comment;
}

int Assignment::getGrade() {
    return(grade);
}

int Assignment::getMax() {
    return(max);
}

void Assignment::editgrade() {
    cout << "Enter new grade" << endl;
    cin >> grade;
}
void Assignment::editcomment() {
    cout << "Enter new comment" << endl;
    cin >> comment;
}
void Assignment::editmax() {
    cout << "Enter new maximum grade" << endl;
    cin >> max;
}

double coursegrade(vector<Assignment> x) {
    double grade = 0;
    double max = 0;
    int i = 0;
    for (; i < x.size(); i++) {
        grade += x[i].getGrade();
        max += x[i].getMax();
    }
    grade = ((grade / max) * 100);
    return(grade);
}

int main(void)
{
    vector<Assignment> myassignments;

    Assignment a = Assignment();

    myassignments.push_back(a);

    cout << "Current Grade: " << endl;

    double b = coursegrade(myassignments);

    cout << b << "%" << endl;

    a.editgrade();

    // double z = coursegrade(myassignments);

    //  cout << z << "%" << endl;

    //NEED PERSISTANT DATA (Store in a file)
}