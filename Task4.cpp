#include <iostream>
using namespace std;
main()
{
	int array[5];

	cout<<"Enter 5 numbers \n";

	for(int i=0;i<5;i++)
	{
		cin>>array[i];	
	}

	for (int j=0; j<5; j++)

	{
		cout<<"The square of "<<array[j]<<" is "<<array[j]*array[j]<<endl;		
	}

}
