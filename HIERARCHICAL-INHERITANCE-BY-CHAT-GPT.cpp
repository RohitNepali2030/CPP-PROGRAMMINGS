#include <iostream>
#include <string>

class Animal {
protected:
    std::string name;

public:
    Animal(const std::string& name) : name(name) {}

    virtual std::string make_sound() const {
        return "Animals make sounds.";
    }
};

class Mammal : public Animal {
public:
    Mammal(const std::string& name) : Animal(name) {}

    std::string make_sound() const override {
        return "Mammals make various sounds.";
    }
};

class Bird : public Animal {
public:
    Bird(const std::string& name) : Animal(name) {}

    std::string make_sound() const override {
        return "Birds chirp and make different sounds.";
    }
};

int main() {
    // Create instances of the subclasses
    Mammal dog("Dog");
    Bird sparrow("Sparrow");

    // Demonstrate hierarchical inheritance
    std::cout << dog.make_sound() << std::endl;
    std::cout << sparrow.make_sound() << std::endl;

    return 0;
}
