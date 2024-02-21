// insertion sort for ascending

#include <iostream>
using namespace std;

main()
{
    
    int A[10]={4,3,2,6,7,1,9,8,5,10};
    int temp;
	bool swap = true;
	
	// we use the do while loop in this case so when the value that comes first is greater than the next one, it swaps the places to arrange data in the ascending order
    do
    {
    	
    	swap = false;
		for (int i=0 ; i<10 ; i++)
    	{
    		
    	   temp   = A[i];
		   if (A[i] > A[i+1])
    	
             {
	
    	        A[i]   = A[i+1];	
    	        A[i+1] = temp;		
		        swap = true;
			}
		}
    }
    while (swap);
    
    for (int i = 0 ; i < 10; i++)
cout<<A[i]<<endl;



}