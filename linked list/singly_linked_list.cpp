#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
};

struct LinkedList
{   
    Node *head, *temp;
    LinkedList()
    {
        head = NULL;
       temp = NULL;
    }

    void add_node(int n)
    {
        Node *newnode = new Node;
      newnode->data = n;
       newnode->next = NULL;
        if(head == NULL)
        {
            head = newnode;
           temp = newnode;
        }
        else
        {
          temp->next = newnode;
          temp =temp->next;
        }
    
    }
   
};

int main()
{
    LinkedList a;
    a.add_node(1);
    a.add_node(2);
    a.add_node(3);
    a.add_node(4);
    a.add_node(7);
    a.add_node(8);
   
    Node *tmp;
    tmp=a.head;
    while(tmp!=NULL) //traverse from head to tail
    {
    	cout<<tmp->data<<" "<<endl;
    	tmp=tmp->next;
	}



    return 0;
}
