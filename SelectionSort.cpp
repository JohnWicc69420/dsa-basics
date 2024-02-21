// Selection sort for descending
#include <iostream>
using namespace std;

main()
{
    
    int A[10]={4,3,2,6,7,1,9,8,5,10};
    int temp;
	
	for (int i=0 ; i<10 ; i++)
    {
			
	    for	( int j=0 ; j<10; j++)
        if (A[i] > A[j])
		{
	   	
        temp   = A[i];
    	A[i]   = A[j];	
    	A[j] = temp;	
		}
    }

    for (int i = 0 ; i < 10; i++)
cout<<A[i]<<endl;



}