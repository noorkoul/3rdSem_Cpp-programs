//Calculate the percentage of marks of a student in 5 subjects

#include<iostream>
using namespace std;

int main(){
    float marks[5], sum=0, percentage;
    int i;
    cout<<"Enter the marks for 5 subjects: ";
    for(i=0; i<5; i++){
        cin >> marks[i];
        sum=sum+marks[i];
    }
    percentage=(sum/500 * 100);
    cout<<"Percentage: "<<percentage<< "%";


    return 0;
}