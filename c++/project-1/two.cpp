#include<iostream>
using namespace std;

main(){
    
    //count digits

    int count=0;
    int num;

    cout << "enter a number : ";
    cin >> num;
  
       while (num)
       {
        count++;
        num=num/10;
       }
       
        cout << "Number of digits: " << count << endl;

    
}