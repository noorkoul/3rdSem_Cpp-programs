//Circle Area calculation

#include <iostream>
#define PI 3.14159
using namespace std;
class Circle{

    private: double radius;

    public: void getInput(){
        cout<<"Enter the radius of the circle: ";
        cin>> radius;

    }
        double calculateArea(){
            return PI * radius * radius;
        }
};
int main(){
    Circle c;
    c.getInput();
    cout<<"Area of circle: "<< c.calculateArea()<<endl;
    return 0;
};