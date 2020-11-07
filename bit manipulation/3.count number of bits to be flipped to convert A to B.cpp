/*
* Author : Pinky Mangla
* Date   : November 2020
* Compiler : g++ 4.9.2
* Flags : -std=c++14
* Time complexity : O(logn)
* Title :count number of bits to be flipped to convert A to B
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n1=0,n2=0;
	cout<<"enter first number"<<endl;
	cin>>n1;
	cout<<"enter second number"<<endl;
	cin>>n2;
	int count=0;
   int n3=n1^n2;
   while(n3>0){
   	count++;
   	n3=n3&(n3-1);
   }
   
	cout<<"number of flips "<<count<<endl;
	
	
	
	
}
