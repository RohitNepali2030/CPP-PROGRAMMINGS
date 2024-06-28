#include <iostream>
#include <cstring>

class MyString {
private:
    char* str;
public:
    MyString() : str(nullptr) {} // Default constructor

    // Dynamic constructor
    MyString(const char* s) {
        if (s != nullptr) {
            int len = strlen(s) + 1;
            str = new char[len];
            strcpy(str, s);
        } else {
            str = nullptr;
        }
    }

    // Copy constructor
    MyString(const MyString& other) {
        if (other.str != nullptr) {
            int len = strlen(other.str) + 1;
            str = new char[len];
            strcpy(str, other.str);
        } else {
            str = nullptr;
        }
    }

    // Overload the '+' operator for concatenation
    MyString operator+(const MyString& other) const {
        if (other.str == nullptr) {
            return *this;
        }

        if (str == nullptr) {
            int len = strlen(other.str) + 1;
             
            strcpy(str, other.str);
        } else {
            int len1 = strlen(str);
            int len2 = strlen(other.str);
            char* temp = new char[len1 + len2 + 1];
            strcpy(temp, str);
            strcat(temp, other.str);
            MyString newString(temp);
            delete[] temp;
            return newString;
        }

        return *this;
    }

    // Destructor to release memory
    ~MyString() {
        delete[] str;
    }

    // Getter method to retrieve the string
    const char* getString() const {
        return str;
    }
};

int main() {
    MyString str1("Hello");
    MyString str2(" World!");

    MyString result = str1 + str2;

    std::cout << "Concatenated String: " << result.getString() << std::endl;

    return 0;
}
