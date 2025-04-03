#include<iostream>
using namespace std ;

void addition(int num1,int num2){
    int sum = num1 + num2 ;
    cout << "Addition of " << num1 << " and " << num2 << " is : " << sum << endl;
};

void subtraction(int num1,int num2){
    int sum = num1 - num2 ;
    cout << "Subtraction of " << num1 << " and " << num2 << " is : " << sum << endl;
};

void multiplication(int num1,int num2){
    int sum = num1 * num2 ;
    cout << "Multiplication of " << num1 << " and " << num2 << " is : " << sum << endl;
};

void division(int num1,int num2){
    int sum = num1 / num2 ;
    cout << "Division of " << num1 << " and " << num2 << " is : " << sum << endl;
};

// void modulus(int num1,int num2){
//     int sum = num1 % num2 ;
//     cout << "Modulus of " << num1 << " and " << num2 << " is : " << sum << endl;
// };

void calculator(){
   
    int choice;
    
    while (choice != 0) {
        cout << "Press 1 for + " << endl;
        cout << "Press 2 for - " << endl;
        cout << "Press 3 for * " << endl;
        cout << "Press 4 for / " << endl;
        cout << "Press 5 for % " << endl;
        cout << "Press 0 for exit " << endl;
        
        cout << "Enter your choice : ";
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
                addition(num1,num2);
                break;

            case 2:
                subtraction(num1,num2);
                break;

            case 3:
                multiplication(num1,num2);
                break;

            case 4:
                division(num1,num2);
                break;

            // case 5:
            //     modulus(num1,num2);
            //     break;

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

void addition(){};

int main(){

    calculator();

}