//Volume of cube
#include <iostream>
using namespace std;

class Cube {
    private:
        float side;
    
    public:
        void setside(){
            cout<<"Enter the value of side: ";
            cin>>side;
        }
        double calculateVolume() {
            return side * side * side;
        };
};
        int main(){
            Cube c1,c2;
            c1.setside();
            c2.setside();
            cout<<"Volume of cube 1: "<<c1.calculateVolume()<<endl;
            cout<<"Volume of cube 2: "<<c2.calculateVolume()<<endl;

            return 0;
        };

        