/*
Name : Muhammad Usman Tariq
Roll No. : 49-BSCS-20
Section : A
*/

#include<iostream>
using namespace std;
class Node
{
	public:
		
	int Data;
	Node *Left;
	Node *Right;
	
	Node(int Data)
	{
		this->Data=Data;
		this->Left= NULL;
		this->Right= NULL;	
	}
	
};
void InOrder(Node* node)
{
	if(node == NULL)
	{
		return;
	}
	InOrder(node->Left);
	cout<<node->Data<<"\t";
	InOrder(node->Right);
}
void PreOrder(Node* node)
{
	if(node == NULL)
	{
		return;
	}
	cout<<node->Data<<"\t";
	InOrder(node->Left);
	InOrder(node->Right);
}
void PostOrder(Node* node)
{
	if(node == NULL)
	{
		return;
	}
	InOrder(node->Left);
	InOrder(node->Right);
	cout<<node->Data<<"\t";
}
Node* Insert(Node*RootNode,int node)
{
	Node* NewNode=new Node(node);
	Node* Object1=RootNode;
	Node* Object2=NULL;
	while(Object1!=NULL)
	{
		Object2=Object1;
		if(node<Object1->Data)
		{
			Object1=Object1->Left;
		}
		else
		{
			Object1=Object1->Right;
		}
	}
	if(Object2==NULL)
	{
		Object2=NewNode;
	}
	else if(node<Object2->Data)
	{
		Object2->Left=NewNode;
	}
	else
	{
		Object2->Right=NewNode;
	}
	return Object2;
}
int main()
{
	Node* RootNode=NULL;
	RootNode=Insert(RootNode,7);
	Insert(RootNode,6);
	Insert(RootNode,8);
	Insert(RootNode,2);
	Insert(RootNode,9);
	Insert(RootNode,6);
	Insert(RootNode,6);

		
	cout<<"InOrder Traversal"<<endl;
	InOrder(RootNode);

	cout<<endl<<"PreOrder Traversal"<<endl;
	PreOrder(RootNode);

	cout<<endl<<"PostOrder Traversal"<<endl;
	PostOrder(RootNode);
	
	cout<<endl<<"Sorted Tree"<<endl;
	InOrder(RootNode);
	
	return 0;
}
