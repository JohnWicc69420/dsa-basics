#include <iostream>
using namespace std;
main()
{
	int l , MidValue;

	cout<<"Enter the length of the array ";

	cin>>l;

	int array[l];

	cout<<"Enter the elements of an array \n";

	for(int i=0;i<l;i++)
	{
		cin>>array[i];
		
	}
  if (l%2==0)

	{
	
		MidValue=l/2;
	}
  else
  {
  	    MidValue=(l/2)+1;
	  }	
	
	
	int index=MidValue-1;

	cout<<"Index of middle value is "<<index<<endl;

	cout<<"Middle value is "<<array[index];
	
}

