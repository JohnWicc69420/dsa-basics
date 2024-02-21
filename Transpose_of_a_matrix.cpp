#include <iostream>
using namespace std;
main()
{

int array[3][3]=
{{1,2,3},
{4,5,6},
{7,8,9}};

cout<<"Original matrix\n"<<endl;
for (int i = 0; i<3 ;i++)
{
     for (int j = 0; j<3 ;j++) 
    {
     cout << array[i][j] <<"\t";
    }
cout <<endl<<endl<<endl;

  }


cout<<"Transpose of the matrix\n"<<endl;

for (int i = 0; i<3 ;i++)
{
     for (int j = 0; j<3 ;j++) 
    {
     cout << array[j][i] <<"\t";
    }
cout <<endl<<endl<<endl;

  }





}