#include<iostream>
using namespace std;
main(){

    int a;
     cout << ("enter marks out of 100 = ");
    scanf("%d",&a);

    char grade;

    if(a>=90 && a<=100)
    {
        cout << "grade a" << endl;
        grade='a';
    }

    else if(a>=80 && a<=90)
    {
        cout << "grade b" << endl;
        grade='b';
    }

     else if(a>=70 && a<=80)
    {
        cout << "grade c" << endl;
        grade='c';
    }
    
     else if(a>=60 && a<=70)
    {
        cout << "grade d" << endl;
        grade='d';
    }

     else if(a>=50 && a<=60)
    {
        cout << "grade e" << endl;
        grade='e';
    }

     else if(a>=40 && a<=50)
    {
        cout << "grade f" << endl;
        grade='f';
    }

    else{
        cout << "fail" << endl;
    }

    switch (grade)
    {
       case 'a' :
        cout << "You got A";
    break;
        case 'b' :
        cout << "You got B";
    break;
        case 'c' :
        cout << "You got C";
    break;
        case 'd' :
        cout << "You got D";
     break;
        case 'e':
        cout << "You got E";
     break;
        case 'f' :
        cout << "You got F";
    break;
    default:
     cout << "Failed";
}

}