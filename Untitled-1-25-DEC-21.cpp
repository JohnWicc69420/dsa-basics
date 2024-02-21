#include <iostream>
using namespace std;

class Node
{
  public:
  int info;
  Node *next;

};

int main()
{

Node* head = new Node();
Node* Node2 = new Node();
Node* Node3 = new Node();
Node* Node4 = new Node();
Node* Node6 = new Node();
head->info = 49;
head->next= Node2;
Node2->info = 50;
Node2->next = Node3;
Node3->info = 51;
Node3->next = Node4;
Node4->info = 52;
Node4->next = Node6;
Node6->info = 54;
Node6->next = NULL;

Node* Node5 = new Node(); 
Node5->info = 53;
Node5->next = Node6;
Node4->next = Node5;

Node* current = new Node();
current = head;
while (current != NULL)
{
cout << current->info <<endl;
current = current->next;

}
}