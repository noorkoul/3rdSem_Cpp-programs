// Leap Year Check
#include<iostream>
using namespace std;

int main(){
    int year;

    cout<<"Enter a year: ";
    

    if (!(cin >> year)) { 
    cout << "Invalid input. Please enter a valid integer year." << endl;
    return 1;
}

    if((year %4== 0 && year %100 !=0) || (year %400 == 0)){
        cout<<year<< "Is a Leap Year.";
    }else{
        cout<< year<<" Is not a leap year.";
    }


    return 0;
}