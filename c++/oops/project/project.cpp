#include<iostream>
using namespace std;
#include<string.h>

class BankAccount{
    private :

    int AccountNumber;
    char AccountHolderName[30];
    int Balance;
    int amount;

    public:

    int Deposit(){
        cout << "enter amount to deposit : ";
        cin >> amount;
        Balance += amount;
        cout << "Deposited : " << amount << endl;
    }

    int Withdraw(){
        cout << "enter amount to withdraw : ";
        cin >> amount;
        Balance -= amount;
        cout << "Withdraw : " << amount << endl;
    }

    int GetBalance(){
        cout << "Account balance is : " << this->Balance << endl;
    }

    int DisplayAccountInfo(){
        cout << "Enter AccountNumber : ";
        cin >> AccountNumber;
        cout << "Enter AccountHolderName : ";
        cin >> AccountHolderName;
        cout << "Enter Balance : ";
        cin >> Balance;
    }
    
    void getdata(){
        cout << "AccountNumber is :" << AccountNumber << endl;
        cout << "AccountHolderName is :" << AccountHolderName << endl;
        cout << "Balance is : " << Balance << endl;
    }
};

class SavingsAccount : public BankAccount{
    private:

    float interestRate;
    int AccountNumber;
    char AccountHolderName[30];
    int Balance;
  
    public:

   float calculateInterest(){
    cout << "enter interest rate : ";
    cin >> interestRate;
    cout << "interest rate :" << (this->Balance / 100) * interestRate << endl;
   }
};

class CheckingAccount{
    private:

    int OverDraftLimit;

    public:
    int CheckOverDraft(){}
};

class FixedDepositAccount : public BankAccount{
    private:

    int Term;
    int AccountNumber;
    char AccountHolderName[30];
    int Balance;

    public:
    float calculateInterest(){
        cout << "Enter term (in months): ";
        cin >> this->Term;

        float interest = Balance * (8 / 100) * (this->Term / 12);
        cout << "Term : " << interest << endl ;
    }
};

int main(){

    BankAccount obj;
    SavingsAccount obj2;
    FixedDepositAccount obj3;
    obj.DisplayAccountInfo();
    obj.Deposit();
    obj.Withdraw();
    obj.GetBalance();
    obj2. calculateInterest();
    obj3.calculateInterest();
    obj.getdata();
}