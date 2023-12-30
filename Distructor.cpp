#include <iostream>

// A destructor is a special member function in C++ that is called automatically when an object goes out of scope or is explicitly deleted.
// The primary purpose of a destructor is to perform cleanup tasks

class Example {
public:
    // Constructor
    Example() {
        std::cout << "Constructor called" << std::endl;
    }

    // Destructor
    ~Example() {
        std::cout << "Destructor called" << std::endl;
    }
};

int main() {
    // Creating an instance of the Example class
    Example obj;

    // The destructor will be automatically called when 'obj' goes out of scope
    std::cout << "Exiting the main function" << std::endl;

    return 0;
}
