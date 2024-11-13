//Nested if statement
#include<iostream>
using namespace std;

int main(){
    int age;
    cout <<"Enter your age: ";
    cin >> age;

    if(age<12)
    cout <<"You are a child";

    else if(age>=12 && age<=18)
    cout<<"You are a teenager";

    else if(age>=19 && age<=60)
    cout <<"You are an adult";

    else
    cout<<"You are a senior";

    return 0;

}