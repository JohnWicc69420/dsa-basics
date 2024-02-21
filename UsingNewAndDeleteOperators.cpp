#include <iostream>
using namespace std;
int main ()
{
int n;
cout<<"What is the size of the array? \n";
cin>>n;
int *A = new int[n];

for (int i = 0; i<n ; i++)
{
cout << "Enter the element number "<<i+1<<endl;
cin >> A[i];
}

for (int i = 0; i<n ; i++)
{
cout << "The value stored at "<<i+1<< " is: " << A[i]<<endl;}

delete[] A;

cout <<endl <<endl <<endl<< "After deletion: " << endl;
for (int i = 0; i<n ; i++)
{
cout << "The value stored at "<<i+1<< " is: " << A[i]<<endl;}

}