//Switch statements for a basic calculator
#include<iostream>
using namespace std;

int main(){
      int num1, num2;
    char op;
    
    cout << "Enter two integers and an operator (+, -, *, /): ";
    cin >> num1 >> num2 >> op;
    
    switch(op){

        case '+': cout<< "RESULT: "<< num1+num2; break;
        case '-': cout<< "RESULT: "<< num1-num2; break;
        case '*': cout<< "RESULT: "<< num1*num2; break;
        case '/': 
         if (num2 != 0)
                cout << "Result: " << num1 / num2 << endl;
            else
                cout << "Error: Division by zero." << endl;
            break;

        default:cout<<"INVALID OPERATOR."; break;
    }
    return 0;

}
 
