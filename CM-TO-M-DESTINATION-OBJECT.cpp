#include <iostream>

class Meter; // Forward declaration

class Centimeter {
private:
    double value;

public:
    Centimeter(double cm) : value(cm) {}

    operator Meter(); // Conversion function declaration
};

class Meter {
private:
    double value;

public:
    Meter(double m) : value(m) {}

    // Conversion function definition for Centimeter
    Meter::operator Centimeter() {
        return Centimeter(value * 100.0);
    }

    void display() {
        std::cout << value << " meters" << std::endl;
    }
};

// Conversion function definition for Centimeter
Centimeter::operator Meter() {
    return Meter(value / 100.0);
}

int main() {
    double length_cm;
    std::cout << "Enter length in centimeters: ";
    std::cin >> length_cm;

    Centimeter length_cm_obj(length_cm);
    Meter length_m_obj = length_cm_obj; // Conversion happens here

    std::cout << length_cm << " centimeters is equal to ";
    length_m_obj.display();

    return 0;
}
