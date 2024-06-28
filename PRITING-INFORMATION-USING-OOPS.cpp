#include<iostream>
#include<cstring>

using namespace std;

class Student
{
    string name;
    string address;
    int phone_Number;

    public:
    void getData()
    {
        cout<<"ENTER NAME OF THE STUDENTS : "<<endl;
        cin>>name;

cout<<"ENTER ADDRESS OF THE STUDENTS : "<<endl;
cin>>address;

cout<<"ENTER PHONE NUMBER OF THE STUDENTS : "<<endl;
cin>>phone_Number;

    }

    void displayData()
    {
        cout<<"NAME OF THE STUDENTS  IS : "<<name<<endl;
cout<<"ADDRESS OF THE STUDENTS IS : "<<address<<endl;
cout<<"PHONE NUMBER OF THE STUDENTS IS : "<<phone_Number<<endl;


    }

};

int main()
{
    Student S;
    S.getData();
    S.displayData();

    return 0;
    
}