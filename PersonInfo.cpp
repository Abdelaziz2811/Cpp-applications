#include <iostream>

using namespace std;

class clsPerson {

private:
	short _ID;
	string _FirstName;
	string _LastName;
	string _Email;
	string _Phone;

public:
	
	clsPerson(short ID, string FirstName, string LastName, string Email, string  Phone) {

		_ID = ID;
		_FirstName = FirstName;
		_LastName = LastName;
		_Email = Email;
		_Phone = Phone;
	}

	short GetID() {

		return _ID;
	}

	void SetFirstName(string FirstName) {

		_FirstName = FirstName;
	}
	string GetFirstName() {

		return _FirstName;
	}

	void SetLastName(string LastName) {

		_LastName = LastName;
	}
	string GetLastName() {

		return _LastName;
	}

	void SetEmail(string Email) {

		_Email = Email;
	}
	string GetEmail() {

		return _Email;
	}

	void SetPhone(string Phone) {

		_Phone = Phone;
	}
	string GetPhone() {

		return _Phone;
	}

	string FullName() {

		return _FirstName + " " + _LastName;
	}

	void PrintInfo() {

		cout << "\n Info : \n";
		cout << "_______________________________________\n\n";
		cout << " ID          : " << GetID() << endl;
		cout << " First Name  : " << GetFirstName() << endl;
		cout << " Last Nam    : " << GetLastName() << endl;
		cout << " Full Name   : " << FullName() << endl;
		cout << " Email       : " << GetEmail() << endl;
		cout << " Phone       : " << GetPhone();
		cout << "\n_______________________________________\n";
	}

	void SendEmail(string Subject, string Body) {

		cout << "\nThe following message sent successfuly to email : " << _Email << endl;
		cout << "Subject : " << Subject << endl;
		cout << "Body : " << Body << endl;
	}

	void SendMessage(string Message) {

		cout << "\nThe following SMS sent suceesfuly to phone number : " << _Phone << endl;
		cout << "Massage : " << Message << endl;
	}

};

int main() {

	clsPerson Person1(10,"Abdelaziz","Bahoumi","forexemple@gmail.com","08754646");
	Person1.PrintInfo();

	Person1.SendEmail("Hi", "How are you ?");
	Person1.SendMessage("Hi, How are you doing ?");



	return 0;
}

