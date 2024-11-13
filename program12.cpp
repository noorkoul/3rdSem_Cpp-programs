//Nested switch statements for menu

#include<iostream>
using namespace std;

int main(){
    int choice, subchoice;

    cout<<"Choose a type of meal: \n1.VEGETARIAN \n2) NON-VEGETARIAN";
    cin>>choice;

    switch(choice){
        case 1:
        cout<<"Choose a vegetarian dish: \n1) SALAD \n2) Idli"; break;
        cin>>subchoice;
        switch(subchoice){
            case 1:cout<<"You chose SALAD."; break;
            case 2: cout<<"You chose Idli."; break;
            default: cout<<"Invalid choice."; break;
        }
            break;

        case 2:
        cout<<"Choose a non -vegetarian dish: \n1) Chicken biryani \n2) Kebabs"; break;
        cin>>subchoice;
        switch(subchoice){
            case 1:cout<<"You chose Chicken Biryani."; break;
            case 2: cout<<"You chose Kebabs."; break;
            default: cout<<"Invalid choice."; break;
        }
            break;
        default: cout<<"Invalid choice.";


    }
    return 0;
}