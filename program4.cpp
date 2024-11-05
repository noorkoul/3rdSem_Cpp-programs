//Check if number is even or odd

#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter the number: ";
    cin>>number;

   if(number %2==0)
    cout<<"The number is even.";
else
    cout<<"The number is odd.";
    
    return 0;
}