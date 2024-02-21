#include<iostream>
using namespace std;
main()
{
	
	 
	int largest = 0;
	cout<<"Enter 5 numbers \n";
	int array[5];
	for(int i=0 ; i<5 ; i++)
	{
	  
	  cin>>array[i];
	  	
	}
	
	for(int j=0 ; j<5 ; j++)
	
	{
	  if(array[j]>largest)
	{
	  	largest=array[j];
	}	
		 
		 
	}
	
	cout << "The largest number is " << largest;
}
