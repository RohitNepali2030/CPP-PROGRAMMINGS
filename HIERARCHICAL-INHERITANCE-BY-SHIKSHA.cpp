#include <iostream> 
using namespace std; 

// Base class 
class Vehicle { 
public: 
    Vehicle() 
    { 
        cout << "This is a Vehicle" << endl; 
    } 
}; 

// subclass derived from Base Class(Vehicle) 
class Car: public Vehicle { 
public: 
    Car() 
    { 
        cout << "This is a Car" << endl; 
    } 
}; 

// sub class derived from Base Class(Vehicle) 
class Bus: public Vehicle { 
public: 
    Bus() 
    { 
        cout << "This is a Bus" << endl; 
    } 
}; 

// sub class derived from Base Class(Car) 
class Maruti: public Car { 
public: 
    Maruti() 
    { 
        cout << "This is a Maruti Car" << endl; 
    } 
}; 

// main function 
int main() 
{ 
    // creating object of subclass will 
    // invoke the constructor of base class 
    Maruti obj1; 
    return 0; 
}