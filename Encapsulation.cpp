#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    // Private attributes
    string name;
    int age;

public:
    // Public methods to access private attributes

    // Setter for name
    void setName(string newName) {
        name = newName;
    }

    // Getter for name
    string getName() const {
        return name;
    }

    // Setter for age
    void setAge(int newAge) {
        // Check for a valid age (assuming age must be non-negative)
        if (newAge >= 0) {
            age = newAge;
        } else {
            cout << "Invalid age! Age must be non-negative." << endl;
        }
    }

    // Getter for age
    int getAge() const {
        return age;
    }
};

int main() {
    // Create an instance of the Person class
    Person person;

    // Set the attributes using the public methods
    person.setName("Munir");
    person.setAge(23);

    // Retrieve and display the attributes
    cout << "Name: " << person.getName() << endl;
    cout << "Age: " << person.getAge() << endl;

    return 0;
}
