/*
* Author : Pinky Mangla
* Date   : November 2020
* Compiler : g++ 4.9.2
* Flags : -std=c++14
* Time complexity : O(logn)
* Title : program_to_find_whether_a_number_is_power_of_two
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=0,count=0;
	cout<<"enter the number"<<endl;
	cin>>n;
	while(n>0){
		count++;
		n=n&(n-1);
	}
	if(count==1)
		cout<<"true"<<endl;
	else
	    cout<<"false"<<endl;	
	
	
	
}
