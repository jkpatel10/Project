#include <iostream>
using namespace std;
int main(){
    
    int size;
    cout << "Enter the size of array : ";
    cin >> size;

    int arr[size];

    for (int i=0; i<size; i++)
    {
        cout << "Enter value : " ;
        cin >> arr[i] ;
    }
    
    cout << "Negative value : ";

    for (int i=0; i<size; i++) 
    {
        if (arr[i] < 0) 
        {
            cout << arr[i] << endl;
        }
    }
}