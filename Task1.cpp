#include<iostream>
using namespace std;

main()
{
	float FirstNumber, SecondNumber;
	cout << "Enter the first number ";
	cin >> FirstNumber;
	cout << "Enter the second  number ";
	cin >> SecondNumber;
	 
	if (FirstNumber > SecondNumber)
	{ 	
		cout << "The largest number is "<< FirstNumber;
		
	}  
	else
	{
		cout << "The largest number is " << SecondNumber;
		
	}
	
}
