//bubble sort for ascending
#include <iostream>
using namespace std;

main()
{
    
    
    // declare variables
    int A[10]={4,3,2,6,7,1,9,8,5,10};
    int temp;
	bool swap = true;
	
	// use the while loop so if the swap is true i.e if the first value is greater than the value next to it, it swaps the position so the next (smaller) value comes first and keeps on doing it until all the values are 
	// swapped 
	// and our data is in ascending form
	 
    while (swap)
    {
    	
    	
    	swap = false;
    	
		for (int i=0 ; i<9 ; i++)
    	if (A[i] > A[i+1])
		{
    	
        temp   = A[i];
    	A[i]   = A[i+1];	
    	A[i+1] = temp;	
    	swap = true;	
		}
    }

    
	// display the results
	for (int i = 0 ; i < 10; i++)
cout<<A[i]<<endl;



}
