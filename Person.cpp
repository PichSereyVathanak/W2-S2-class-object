#include <iostream>
#include <string>
using namespace std;

class Person {
    public:
    string lastName;
    string firstName;
	int securityNumber;

    Person (string firstName, string lastName, int securityNumber) {
        this->firstName = firstName;
        this->lastName = lastName;
        this->securityNumber = securityNumber;
    }
    void setFirstName (string firstName) {
        this->firstName = firstName;
    }
    string toString() const {
        return "First Name: " + firstName + ", Last Name: " + lastName + ", Security Number: " + to_string(securityNumber);
    }
};


int main() {
    Person ronan("ronan", "ogor", 4785);
    ronan.setFirstName("ronano");
    std::cout << ronan.toString() << std::endl;

    return 0;
}