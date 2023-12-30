#include<iostream>
using namespace std;


class Car
{

//No one can access this    
private:
    int speed;


//everyone can access this
public:
string color,model;
int price;


//Constrcutor
Car(int p, string c, string m){
color = c;
price = p;
model = m;
}
    
};

int main(){

//creating object
Car bugati = Car(250, "red", "m1");
cout<<bugati.price<<endl;
cout<<bugati.color<<endl;
cout<<bugati.model;    

return 0;

}