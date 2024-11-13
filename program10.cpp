//Switch statements for days of the week
#include<iostream>
using namespace std;

int main(){
    int day;
    cout << "Enter number between 1 -7 : ";
    cin >>day;

    switch(day){

        case 1: cout<< "MONDAY"; break;
        case 2: cout<< "TUESDAY"; break;
        case 3: cout<< "WEDNESDAY"; break;
        case 4: cout<< "THURSDAY"; break;
        case 5: cout<< "FRIDAY"; break;
        case 6: cout<< "SATURDAY"; break;
        case 7: cout<< "SUNDAY"; break;
    }

    return 0;
}