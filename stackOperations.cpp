/*
* Author : Pinky Mangla
* Date : May 2020
* Compiler : g++ 4.9.2
* Flags : -std=c++14
* Time complexity :O(n)
* Title : allStackOperation
*/
#include<iostream>
using namespace std;

int stack[100] , n,ch,x;
int top=-1;
void push(){
	
	if(top==(n-1))
	cout<<"stack overflow"<<endl;
	else{
	    cout<<"enter number you want to insert"<<endl;
	    cin>>x;
		top++;
		stack[top]=x;
	}
}
	void pop(){
	
		if(top==-1)
		cout<<"underflow"<<endl;
		else{
			x=stack[top];
			top--;
			cout<<"popped element is "<<x<<endl;
		}
	}
	void peek(){
		if(top==-1)
		cout<<"stack is empty"<<endl;
		else
		cout<<"topmost element of stack is "<<stack[top]<<endl;
	}
	void display(){
		if(top==-1)
		cout<<"stack is empty"<<endl;
		else{
		for(int i=top;i>=0;i--){
		
			cout<<stack[top]<<" ";
		}
	}
	}
	

int main(){
	cout<<"enter the size of stack"<<endl;
	cin>>n;
	cout<<"STACK OPERATIONS USING ARRAY"<<endl;
    
		cout<<"1. push"<<endl;
		cout<<"2. pop"<<endl;
		cout<<"3. peek"<<endl;
		cout<<"4. display"<<endl;
	do{
		cout<<"enter choice"<<endl;
		 cin>>ch;
		 switch(ch){
		 	case 1:
		 		push();
		 		break;
		 	case 2:
			    pop();
				break;
			case 3:
			    peek();
				break;
			case 4:
			    display();
				break;
			default: 
			cout<<"invalid case";				
		 		
		 }
	}while(ch!=0);
}
