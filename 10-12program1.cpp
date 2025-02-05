//Complex Number Comparison
#include <iostream>
#include<cmath>
using namespace std;

int main(){
    float real1,real2,img1,img2, mag1,mag2;
    cout<<"Enter the real and the imaginary parts of the first complex number: ";
    cin>>real1>>img1;
    cout<<"Enter the real and the imaginary parts of the second complex number: ";
    cin>>real2>>img2;

    mag1=sqrt(real1 * real1 + img1 * img1 );
    mag2=sqrt(real2 * real2+ img2* img2 );

    if(mag1>mag2)
      cout<<"First complex number has a higher magnitude. \n";
    else if(mag1<mag1)
        cout<<"Second complex number has a higher magnitude.\n";
    else
        cout<<"EQUAL.\n";

    return 0;
}