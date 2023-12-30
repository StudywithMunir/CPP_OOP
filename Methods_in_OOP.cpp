#include<iostream>
using namespace std;


class Car
{

//only this or inherited class can access this attribute   
protected:
    float speed;


//everyone can access this
public:
string color,model;
int price;


//Constrcutor
Car(int p, string c, string m, float s){
color = c;
price = p;
model = m;
speed = s;
}

//creating a method
void car_run(float distance){
    cout<<model<<" will take "<<distance/speed<<" hours to cover " <<distance<<" kilometers "<<endl;
}
    
};

int main(){

//creating object
Car bugati = Car(250, "red", "m1",150);
cout<<bugati.price<<endl;
cout<<bugati.color<<endl;
cout<<bugati.model<<endl;

bugati.car_run(30);

return 0;

}