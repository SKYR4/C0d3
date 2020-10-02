#include <iostream>

using namespace std;

int main()
{
int i, j, rows;

    // Input rows from user
    cout<<"Enter number of rows : "<<endl;
    cin>>rows;

    //Creating triangle Logic:
    for(i=1; i<=rows; i++)
    {
        for(j=i; j<rows; j++)
        {
            cout<<" ";
        }

        for(j=1; j<=i; j++)
        {
            if(i==rows || j==1 || j==i)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }

        cout<<endl;
    }

    return 0;
}
//Output :
Enter number of rows: 5
    *
   **
  * *
 *  *
*****
