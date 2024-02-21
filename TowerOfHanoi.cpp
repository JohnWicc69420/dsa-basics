#include <iostream>
 
using namespace std;

int main()
{
    cout<<endl<<endl<<endl<<endl<<endl;
int h = 70;
int &u = h;
cout << "h= "<<h<<endl;
cout << "u= "<<u<<endl<<endl;

cout<<"day 2"<< endl<<endl;
h /= 2; 
cout << "h= "<<h<<endl;
cout << "u= "<<u<<endl;
}