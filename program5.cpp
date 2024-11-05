//Check if an alphabet is a vowel or consonant

#include<iostream>
using namespace std;

int main(){
    char al;
    cout<<"Enter the alphabet: ";
    cin>>al;

    if(al== 'a' || al== 'e' || al== 'i' || al== 'o' || al== 'u'  )
         cout<<"The alphabet is a vowel.";
else
    cout<<"The alphabet is a consonant.";


    return 0;
}