/*
* Author : Pinky Mangla
* Date : June 2020
* Compiler : g++ 4.9.2
* Flags : -std=c++14
* Time complexity :O(n)
* Title : postfix_expression_evaluation
*/
#include<iostream>
#include<stack>
#include<string>
using namespace std;
int evaluate(string s){
     stack<char> stak;
     for(int i=0;i<s.length();i++){
     	if(s[i]>='0'&& s[i]<='9'){
     		stak.push(s[i]-'0');
		 }
		 else{
		 	int x= stak.top();
		 	stak.pop();
		 	int y= stak.top();
		 	stak.pop();
		 	if(s[i]=='+')
		 	   stak.push(y+x);
		 	else if(s[i]=='-')
			    stak.push(y-x);
			else if(s[i]=='*')
			     stak.push(y*x);
			else if(s[i]=='/')
			      stak.push(y/x);	 	   
		 	
		 	
		 }
	 }
	 return (stak.top());


}
int main(){
	string str = "82/";
	int result = evaluate(str);
	cout<<"result is = "<<result;
	return 0;
}
