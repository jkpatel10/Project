#include<iostream>
using namespace std;

main(){

    // sum of first and last digit

    int num;
     
     cout << "Enter a number : ";
     cin >> num;

     int last = num % 10;
     int first;

     while (num>=10)
    {
        num = num / 10;
        first = num;
    }

      int sum = last + first;
      
     cout << "sum of first and last digit is : " << sum;
    
}