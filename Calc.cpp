#include <iostream>
#include <string>
using namespace std;

int main() {
    while (true){
        int num1;
        int num2;
        string Operator;

        cout << "enter num1: ";
        cin >> num1;
    
        cout << "enter num2: ";
        cin >> num2;
        
        cout << "Add or Subtract: ";
        cin >> Operator;
    

        if (Operator == "Add") {
            cout << num1 + num2 << endl;

        }
        else if (Operator == "Subtract") {

            cout << num1 - num2 << endl;


        }
        else {
            cout << "invalid operator, please try again." << endl;
                continue;


            }

        

        }
}