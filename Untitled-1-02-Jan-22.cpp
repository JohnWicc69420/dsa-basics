#include <iostream>

using namespace std;

struct node
{
    int data;
    node *next;
};

class linked_list
{
private:
     node *head,*tail;
public:
    
    linked_list()
    { head = NULL;
        tail = NULL;
    
}

    void add_node(int n)
    {
        node *tmp = new node;
        tmp->data = n;
        tmp->next = NULL;

        if(head == NULL)
        {
            head = tmp;
            tail = tmp;
        }
        else
        {
            tail->next = tmp;
            tail = tmp;
        }
    }

    node* gethead()
    {
        return head;
    }

    static void display(node* head)
    {
        if(head == NULL)
        {
            cout << "NULL" << endl;
        }
        else
        {
            cout << head->data << endl;
            display(head->next);
        }
    }
    
    void getElements()
    {
      int h;
      int x;
      cout<<"How many?";
      cin>>h;
      
      while (h != 0)
     {cout<<"Enter the element to add to the list";
      cin>>x;
      add_node(x);
      h--;
      }
      
    }

};
int main()
{
  
    linked_list a;
    a.getElements();
    linked_list::display(a.gethead());
    return 0;
}