//Student grading System
#include<iostream>
using namespace std;

int main(){
    float marks[5], total=0, percentage;
    int failCount=0, i;

    cout<<"Enter the marks in 5 subjects: ";
    for(i=0; i<5;i++){
        cin>>marks[i];
        total+=marks[i];
        if(marks[i]<40) failCount++;
    };

        percentage=total/5;

        if(failCount>1){
            cout<<"Repeat Year\n";
        }else{
            if(percentage>=90) cout<<"Grade: A\n";
                else if(percentage>=70) cout<<"Grade:B\n";
                else if(percentage>=50) cout<<"Grade:C\n";
                else if(percentage>=40) cout<<"Grade:D\n";
                else cout<< "Grade:F\n";
        }

        return 0;
}