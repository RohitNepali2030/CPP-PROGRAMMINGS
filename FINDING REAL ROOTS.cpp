#include <iostream>
#include <cmath>
using namespace std;

int main()
{
double a,b,c,rt1,rt2; //declaring variables.
cout<<"\nEnter Value of a : ";

cin>>a;

cout<<"\nEnter Value of b : ";

cin>>b;

cout<<"\nEnter Value of c : ";

cin>>c;


//cin>>a>>b>>c; // taking values from user
rt1 = (-b + sqrt(b*b-4.*a*c) ) / (2.*a); //calculating quadratic
rt2 = (-b - sqrt(b*b-4.*a*c) ) / (2.*a);
cout<<"\n First root is "<<rt1<<endl;
  //printing roots 1 and 2 values
cout<<"\n Second root is "<<rt2<<endl;
  
return 0;
}
