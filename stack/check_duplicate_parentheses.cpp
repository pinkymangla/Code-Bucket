/*
* Author : Pinky Mangla
* Date : June 2020
* Compiler : g++ 4.9.2
* Flags : -std=c++14
* Time complexity :O(n)
* Title : check_duplicate_parentheses
*/
#include<iostream>
#include<string>
#include<stack>
using namespace std;
void checkDuplicates(string str){
	
	if(str.length() <= 3)
	return;
	
	stack<char> stak;
	
	for(char c: str){
		
		if(c != ')'){
		
		stak.push(c);
	}
		else{
			
			if(stak.top() == '(')
			{
			cout<<"duplicate parentheses"<<endl;
			return;
		   }
		   
			while(stak.top() != '(')
				stak.pop();
				
				stak.pop();
			
			
			
		}
	}
	cout<<"doesn't have duplicate parentheses"<<endl;
}
int main(){
	string s= "((a+b))";
	checkDuplicates(s);
	return 0;
}
