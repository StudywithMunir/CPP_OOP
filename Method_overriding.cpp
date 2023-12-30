#include <iostream>


//the Base class has a virtual function display(), and the Derived class overrides this function.
// The main function demonstrates polymorphism by using a base class pointer to call the display() function. 

// Base class
class Base {
public:
    // Virtual function
    virtual void display() const {
        std::cout << "This is the base class." << std::endl;
    }
};

// Derived class
class Derived : public Base {
public:
    // Override the virtual function
    void display() const override {
        std::cout << "This is the derived class." << std::endl;
    }
};

int main() {
    // Create instances of the classes
    Base baseObj;
    Derived derivedObj;

    // Call the display function using base class pointer
    Base* ptr = &baseObj;
    ptr->display();  // Calls Base::display()

    // Call the display function using derived class pointer
    ptr = &derivedObj;
    ptr->display();  // Calls Derived::display()

    return 0;
}
