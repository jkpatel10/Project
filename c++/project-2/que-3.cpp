#include <iostream>
using namespace std;
main (){

    for (int i=1; i<=5; i++)
  {  
    
     for (int k=1; k<=i; k++)
      {
        cout << " ";
      }

      for (int j=5; j>=i; j--)
      {
        if (j%2==0)
        {
            cout << "0";
        }
        
        else
        {
            cout << "1";
        }
        
      }

        cout << endl;
  }

}