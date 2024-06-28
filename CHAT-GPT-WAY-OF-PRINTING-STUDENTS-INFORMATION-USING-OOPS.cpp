#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    string address;
    string phoneNumber;

public:
    // Constructor to initialize the object with default values
    Student() : name(""), address(""), phoneNumber("") {}

    // Function to get student details from the user
    void getDetails() {
        cout << "Enter student name: ";
        getline(cin, name);

        cout << "Enter student address: ";
        getline(cin, address);

        cout << "Enter student phone number: ";
        getline(cin, phoneNumber);
    }

    // Function to display student details
    void displayDetails() {
        cout << "\nStudent Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Phone Number: " << phoneNumber << endl;
    }
};

int main() {
    // Create a Student object
    Student student;

    // Input student details
    student.getDetails();

    // Display student details
    student.displayDetails();

    return 0;
}
