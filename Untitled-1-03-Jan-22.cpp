#include <iostream>
using namespace std;

class Node
{

private:
Node* head;
Node* tail;

public:
int data;
Node *next;

//contructor to initialize values of head and tail
Node()
{

head = NULL;
tail = NULL;

}

//gethead method
Node* gethead()
{
    return head;
}



//addnode method
void addnode(int x)
{

Node* newnode = new Node();
newnode->data = x;
newnode->next = NULL;

if (head == NULL)
{
    head = newnode;
    tail = head;
}

else
{
tail->next = newnode;
tail = tail->next;
}
}

//display method
void display(Node* head)
{
 if (head==NULL)
 cout<<"Null";
 else {

     cout << head->data<<endl;
     head=head->next;
     display(head);
 }



}




};


int main()
{

Node n1;
n1.addnode(6);
n1.addnode(9);
n1.display(n1.gethead());


}