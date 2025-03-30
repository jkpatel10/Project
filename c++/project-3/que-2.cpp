#include <iostream>
using namespace std;
int main(){

    int row;
    cout << "Enter size of row : ";
    cin >> row;

    int column;
    cout << "Enter size of column : ";
    cin >> column;

    int arr[row][column];

    for (int i=0; i<row; i++)
    {
        for (int j=0; j<column; j++)
        {
            cout << "enter value for : ";
            cin >> arr[i][j];
        } 
    }

    for (int i=0; i<row; i++)
    {
        for (int j=0; j<column; j++)
        {
            cout << arr[i][j] << " ";
        } 
        cout << endl;
    }

    int max = arr[0][0];

    for (int i=0; i<row; i++) 
    {
        for (int j=0; j<column; j++) 
        {
            if (arr[i][j] > max) 
            {
               max = arr[i][j];
            }
        }
    }

    cout << "The largest number is : " << max;
    
}