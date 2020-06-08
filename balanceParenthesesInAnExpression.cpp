/*
* Author : Pinky Mangla
* Date : june 2020
* Compiler : g++ 4.9.2
* Flags : -std=c++14
* Time complexity :O(n)
* Title : balancePraenthesesInAnExpression
*/
#include<bits/stdc++.h>
using namespace std;
bool balparen(string exp){
	stack<char> s;
	char x;
	for(int i=0;i<exp.length();i++){
	
		if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
		s.push(exp[i]);
	
		else if(s.empty())
		return false;
	
		switch(exp[i]){
			case ')': 
			x = s.top();
			s.pop();
			if(x=='{' || x=='[')
			return false;
			break;
			
			case '}':
		    x = s.top();
			s.pop();
			if(x=='(' || x=='[')
			return false;
			break;
			
			case ']':
			x = s.top();
			s.pop();
			if(x=='{' || x=='(')
			return false;
			break;	
			  
		}
	}
		return(s.empty());
	
	}

int main(){
	string exp= "{()}[]";
	if(balparen(exp))
	cout<<"balanced parantheses";
	else
	cout<<"not balanced";
	return 0;
	
}
