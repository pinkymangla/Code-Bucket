/*
* Author : Pinky Mangla
* Date : july 2020
* Compiler : g++ 4.9.2
* Flags : -std=c++14
* Time complexity :O(n)
* Title :  rotate_a_linked_list
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
	
		void rotate(int k){
		if(k==0)
		return ;
		node*current = head;
		int count =1;
		while(count<k&& current!=NULL){
			current = current->next;
			count++;
		}	
		
		node*kthnode=current;
		while(current->next!=NULL){
			current = current->next;
		}
		current->next = head;
		head = kthnode->next;
		kthnode->next = NULL;
		
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
	l.push(10);
	l.push(20);
	l.push(30);
	l.push(40);
	l.push(50);
	l.push(60);
	cout<<"original linked list"<<endl;
	l.print();
	cout<<endl;
	cout<<"linked list after rotation"<<endl;
	int k=4;
	l.rotate(k);
	l.print();
	
}




