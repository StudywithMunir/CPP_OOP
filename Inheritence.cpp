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
};

class Electric_car : public Car
{
public:
    int battery_mah;

    // Constructor
    Electric_car(int p, string c, string m, int s, int bm) : Car(p, c, m, s), battery_mah(bm) {}
};

int main()
{
    Electric_car tesla(15000, "red", "t1", 100, 500);

    // Accessing properties through accessor methods
    cout << "Color: " << tesla.getColor() << endl;
    cout << "Model: " << tesla.getModel() << endl;
    cout << "Speed: " << tesla.getSpeed() << " km/h" << endl;
    cout << "Price: $" << tesla.getPrice() << endl;
    cout << "Battery Capacity: " << tesla.battery_mah << " mAh" << endl;

    return 0;
}
