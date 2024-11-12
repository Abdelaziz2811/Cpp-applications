#include <iostream>
using namespace std;

class clsPerson {
private:
    string _FirstName;
    string _LastName;

public:
    // Setter for FirstName
    void setFirstName(string FirstName) {
        _FirstName = FirstName;
    }

    // Getter for FirstName
    string getFirstName() {
        return _FirstName;
    }

    // Setter for LastName
    void setLastName(string LastName) {
        _LastName = LastName;
    }

    // Getter for LastName
    string getLastName() {
        return _LastName;
    }

    // Method to get full name
    string fullName() {
        return _FirstName + " " + _LastName;
    }
};

int main() {
    clsPerson Person;

    // Using setters to set the values
    Person.setFirstName("abdelaziz");
    Person.setLastName("bahoumi");

    // Using getters to get the values
    cout << "First Name: " << Person.getFirstName() << endl;
    cout << "Last Name: " << Person.getLastName() << endl;

    // Using the method to get the full name
    cout << "Full Name: " << Person.fullName() << endl;

    return 0;
}

