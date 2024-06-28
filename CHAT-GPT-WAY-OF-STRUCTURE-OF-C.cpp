#include <iostream>
#include <string>

using namespace std;

// Define the structure to hold student details
struct Student {
    string name;
    string address;
    string phoneNumber;
};

// Function to get student details from the user
void getStudentDetails(Student &student) {
    cout << "Enter student name: ";
    getline(cin, student.name);

    cout << "Enter student address: ";
    getline(cin, student.address);

    cout << "Enter student phone number: ";
    getline(cin, student.phoneNumber);
}

// Function to display student details
void displayStudentDetails(const Student &student) {
    cout << "Student Details:" << endl;
    cout << "Name: " << student.name << endl;
    cout << "Address: " << student.address << endl;
    cout << "Phone Number: " << student.phoneNumber << endl;
}

int main() {
    Student student;

    // Get student details from the user
    getStudentDetails(student);

    // Display student details
    displayStudentDetails(student);

    return 0;
}
