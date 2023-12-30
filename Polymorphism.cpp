#include <iostream>
using namespace std;

class Car
{
protected:
    int speed;
    string color, model;
    int price;

public:
    // Constructor
    Car(int p, string c, string m, int s) : price(p), color(c), model(m), speed(s) {}

    // Accessor methods
    string getColor() const {
        return color;
    }

    string getModel() const {
        return model;
    }

    int getSpeed() const {
        return speed;
    }

    int getPrice() const {
        return price;
    }

    // Virtual function for displaying information
    virtual void displayInfo() const {
        cout << "Color: " << color << endl;
        cout << "Model: " << model << endl;
        cout << "Speed: " << speed << " km/h" << endl;
        cout << "Price: $" << price << endl;
    }
};

class Electric_car : public Car
{
public:
    int battery_mah;

    // Constructor
    Electric_car(int p, string c, string m, int s, int bm) : Car(p, c, m, s), battery_mah(bm) {}

    // Override the displayInfo function for Electric_car
    void displayInfo() const override {
        Car::displayInfo(); // Call the base class function
        cout << "Battery Capacity: " << battery_mah << " mAh" << endl;
    }
};

int main()
{
    Electric_car tesla(15000, "red", "t1", 100, 500);

    // Accessing properties and using polymorphism
    tesla.displayInfo();

    // Using a pointer to the base class for polymorphism
    //passing address of tesla object to car pointer
    Car* carPtr = &tesla;
    carPtr->displayInfo();

    return 0;
}
