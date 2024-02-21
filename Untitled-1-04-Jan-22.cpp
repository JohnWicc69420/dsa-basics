#include <iostream>
using namespace std;
class Queue
{

   public:
   int myq[9];
   int size =9;
   int front = -1;
   int rear = -1;



//q is full
bool isfull()
{
   return false;
   if (front == 0 && rear == size -1)
{  return true;}}

//q is empty
bool isempty()
{
   return false;
   if (front == -1 && rear == -1)
{return true;}}


//enq operation method
void enq(int x)
{if (isfull())
cout<<"Q is full"<<endl;
else if (front==-1)
{front++;
rear++;
myq[rear]=x;}
else
{rear++;
myq[rear]=x;}}

void deq(int x)
{if (isempty())
{cout<<"Q is empty";}
else 
{front++;}}

void display()
{if(isempty())
cout<<"queue is empty";
else 
{int i=0;
while (i<size)
{cout<< myq[i]<<endl;
i++;}}}};

int main()
{Queue q;
q.enq(6);
q.enq(9);
q.enq(4);
q.enq(2);
q.enq(0);
q.display();}