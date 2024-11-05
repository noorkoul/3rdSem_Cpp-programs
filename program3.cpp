//Reverse a number

#include<iostream>
using namespace std;

int main(){
    int number, reverse =0, remainder;
    cout<<"Enter the number: ";
    cin>>number;

    while(number !=0){
        remainder= number %10;
        reverse= reverse * 10 +remainder;
        number=number/10;
        
    }
    cout<<"Reversed number is : "<<reverse;

    return 0;
}