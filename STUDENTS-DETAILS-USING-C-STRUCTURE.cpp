#include<iostream>
using namespace std;

struct Student
{
 char name[100];
 char address[200];
 int phone_Number;

}S;

int main()
{
    cout<<"ENTER INFORMATION OF STUDENTS : "<<endl;

   cout<<"ENTER NAME:"<<endl;
   cin>>S.name;

    cout<<"ENTER ADDRESS: "<<endl;
  cin>>S.address;

  cout<<"ENTER PHONE NUMBER: "<<endl;
  cin>>S.phone_Number;

 cout<<"DISPLAYING INFORMATION: "<<endl;

 {
    cout<<"\nNAME IS :"<<S.name<<endl;
    cout<<"\nADDRESS IS: "<<S.address<<endl;
    cout<<"\nPHONE NUMBER IS: "<<S.phone_Number<<endl;

 }
 return 0;
 

}