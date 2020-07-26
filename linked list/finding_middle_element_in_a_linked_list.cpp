#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node*next;
};
struct middle{
	node *head, *temp;
	middle(){
		head=NULL;
		temp=NULL;
	}
	void add_node(int n){
		node*newnode = new node;
	     newnode->next=NULL;
	     newnode->data = n;
		if(head==NULL){
			head= temp=newnode;
		}
		else{
		temp->next=newnode;
	    temp = newnode; 
		}
	}
	void printMiddle(node*head){
		node*slow_ptr = head;
		node*fast_ptr = head;
		if(head!=NULL){
			while(fast_ptr!=NULL&&fast_ptr->next!=NULL){
				slow_ptr = slow_ptr->next;
				fast_ptr = fast_ptr->next->next;
			}
			cout<<"the middle element is "<<slow_ptr->data;
		}
	}
};
int main(){
	
   
	middle m;
	m.add_node(1);
    m.add_node(2);
    m.add_node(3);
    m.add_node(4);
    m.add_node(7);
    m.add_node(8);
	m.printMiddle(m.head);
	return 0;
	
	}
	

