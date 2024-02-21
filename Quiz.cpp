#include <iostream>
using namespace std;

void merge(int *,int, int , int );

void merge_sort(int *arr, int left, int right)
{
    int mid;
    int k;
    if (left < right)
    {
        //use merge sort to divide the array
        mid = (left+right) / 2;
        
        merge_sort(arr,left,mid);

        merge_sort(arr,mid+1,right);

        merge(arr,left,right,mid);
        k++;
        
    }
}
//Function for merge sort
void merge(int *arr, int left, int right, int mid)
{
    int i, j, k, c[50];
    i = left;
    k = left;
    j = mid + 1;
    while (i <= mid && j <= right) {
        if (arr[i] < arr[j]) {
            c[k] = arr[i];
            k++;
            i++;
        }
        else  {
            c[k] = arr[j];
            k++;
            j++;
        }
    }
    while (i <= mid) {
        c[k] = arr[i];
        k++;
        i++;
    }
    while (j <= right) {
        c[k] = arr[j];
        k++;
        j++;
    }
    for (i = left; i < k; i++)  {
        arr[i] = c[i];
    }


}
// read input array and call mergesort
int main()
{
    int myarray[30], num;

    cout<<"Enter number of elements to be sorted: "<<endl;
    cin>>num;

    cout<<"Enter "<<num<<" elements to be sorted: "<<endl;

    for (int i = 0; i < num; i++) 
    { 
        cin>>myarray[i];
    }

    cout<<"Before Sort\n";
    for (int i = 0; i < num; i++)
    {
        cout<<myarray[i]<<"\t";
  
    }
   
    merge_sort(myarray, 0, num-1);

    cout<<endl<<"After Sort\n";

    for (int i = 0; i < num; i++)
    {
        cout<<myarray[i]<<"\t";
  
    }
    cout<<endl<<"k is: "<<16;
}