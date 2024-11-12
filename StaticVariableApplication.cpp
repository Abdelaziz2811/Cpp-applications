#include <iostream>

using namespace std;

class clsStudent {

private:
	string _Name;
	short _Age;

public:
	static int StudentCount;

	//Constructor.
	clsStudent(string Name, short Age) {//Preffered way to iniatlize data members.

		_Name = Name;
		_Age = Age;
		StudentCount++;
	}

	//Method to print students details.
	void DisplayStudentInfo() {

		cout << "Student Details :\n";
		cout << "Name : " << _Name << ", Age : " << _Age << endl;
		cout << "Total students : " << StudentCount << endl << endl;
	}

};

//Static member class.
int clsStudent::StudentCount = 0;//Initialization outside the class because it needs to have storage allocation once.

int main() {

	clsStudent Student1("Abdelaziz", 19), Student2("Ali", 17), Student3("Ahmed", 20);

	Student1.DisplayStudentInfo();

	Student2.DisplayStudentInfo();

	Student3.DisplayStudentInfo();

	return 0;
}
