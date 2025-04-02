#include<iostream>
using namespace std ;

void calculator(){
   
    int choice;
    
    while (choice != 0) {
        cout << "Press 1 for + " << endl;
        cout << "Press 2 for - " << endl;
        cout << "Press 3 for * " << endl;
        cout << "Press 4 for / " << endl;
        cout << "Press 5 for % " << endl;
        cout << "Press 0 for exit " << endl;
        
        cout << "Enter your choice: ";
        cin >> choice;
        
        if (choice != 0) 
        {

        int num1;
        cout << "Enter first number : ";
        cin >> num1;

        int num2;
        cout << "Enter second number : ";
        cin >> num2;
        
        switch (choice) 
        {
            case 1:
                cout << "Addition of " << num1 << " and " << num2 << " is : " << num1 + num2 << endl;
                break;

            case 2:
                cout << "Subtraction of " << num1 << " and " << num2 << " is : " << num1 - num2 << endl;
                break;

            case 3:

                cout << "Multiplication of " << num1 << " and " << num2 << " is : " << num1 * num2 << endl;
                break;

            case 4:
                cout << "Div ision of " << num1 << " and " << num2 << " is : " << num1 / num2 << endl;
                break;

            case 5:
                cout << "Modulus of " << num1 << " and " << num2 << " is : " << num1 % num2 << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }

    }

    else
    {
        cout << "exit";
    }
    
    }
  
};

int main(){

    calculator();

}