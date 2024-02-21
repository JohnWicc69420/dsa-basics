#include <iostream>
using namespace std;

class Node
{

private:
int object;
Node* nextNode;

public:

int get()
{
     return object; 
}

void set(int object) 
{ 
    this->object = object; 
}

Node* getNext() 
{ 
    return nextNode; 
}

void setNext(Node * nextNode) 
{ 
    this->nextNode = nextNode; 
}


void add (int addObject)
{

Node * newNode = new Node();

newNode->set(addObject);
if( currentNode != NULL ) 
{
newNode->setNext(currentNode->getNext());

currentNode->setNext( newNode);

lastCurrentNode = currentNode;
currentNode = newNode;

}

else 
{
newNode->setNext(NULL);
headNode->setNext(newNode);
lastCurrentNode = headNode;
currentNode = newNode;
}
size ++;
}

};



List list = new List();
list.add(7);
list.add(465);
list.add(54);
list.add(545);

while(int i= 0; i<4 ;i++)
{
cout<<list(i);


}
