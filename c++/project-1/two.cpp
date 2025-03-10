#include<iostream>
using namespace std;
main(){

    char grade;
     cout << "enter grade = ";
    cin >> grade;

    switch (grade)
    {
       case 'a' :
        cout << "Excellent Work";
    break;
        case 'b' :
        cout << "Well Done";
    break;
        case 'c' :
        cout << "Good Job";
    break;
        case 'd' :
        cout << "Work Hard";
     break;
        case 'e':
        cout << "Keep it Up";
     break;
        case 'f' :
        cout << "You passed,but you could do better";
    break;
    default:
     cout << "Sorry,you failed";
}

}