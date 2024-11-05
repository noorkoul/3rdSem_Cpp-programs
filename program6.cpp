//Check if a number is a palindrome

#include<iostream>
using namespace std;

int main(){
    int number, reverse =0, remainder, original;
    cout<<"Enter the number: ";
    cin>>number;
    original=number;

    while(number !=0){
        remainder= number %10;
        reverse= reverse * 10 +remainder;
        number=number/10;
        
    }
    if(original==reverse)
        cout<<"The number is a plaindrome.";
    else
        cout<<"The number is not a palindrome.";

    return 0;
}