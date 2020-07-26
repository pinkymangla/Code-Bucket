
/*
* Author : Pinky Mangla
* Date : july 2020
* Compiler : g++ 4.9.2
* Flags : -std=c++14
* Time complexity :O(n)
* Title : reverse a linked list (using iteration) 
*/
#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node*next;
};
struct linkedList{
		node*temp,*head;
		linkedList(){
			head = NULL;
			temp= NULL;
		}
	void push(int n){
		node*newnode=new node;
	newnode->data = n;
	newnode->next = NULL;
	
		if(head==NULL)
		head = temp=newnode;
		else{
			temp->next=newnode;
			temp =newnode;
			}
		
		}
		void reverseList(){
			node*current=head;
			node*next=NULL;
				node*prev=NULL;
			while(current!=0){
				next=current->next;
				current->next = prev;
			    prev = current;
			    current = next;
			}
			head=prev;
		}
		void print(){
			node*temp = head;
			while(temp!=NULL){
				cout<<temp->data<<" ";
				temp = temp->next;
			}
		}
};
int main(){
	linkedList l;
	l.push(1);
	l.push(2);
	l.push(3);
	l.push(4);
	cout<<"original linked list"<<endl;
	l.print();
	cout<<endl;
	cout<<"linked list after reversing"<<endl;
	l.reverseList();
	l.print();
	
}
