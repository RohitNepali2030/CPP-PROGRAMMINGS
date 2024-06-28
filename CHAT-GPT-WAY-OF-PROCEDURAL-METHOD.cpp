#include <iostream>
#include <string>

using namespace std;

// Function to get student details from the user
void getStudentDetails(string &name, string &address, string &phoneNumber) {
    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter student address: ";
    getline(cin, address);

    cout << "Enter student phone number: ";
    getline(cin, phoneNumber);
}

// Function to display student details
void displayStudentDetails(const string &name, const string &address, const string &phoneNumber) {
    cout << "Student Details:" << endl;
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
    cout << "Phone Number: " << phoneNumber << endl;
}

int main() {
    string name, address, phoneNumber;

    // Get student details from the user
    getStudentDetails(name, address, phoneNumber);

    // Display student details
    displayStudentDetails(name, address, phoneNumber);

    return 0;
}
