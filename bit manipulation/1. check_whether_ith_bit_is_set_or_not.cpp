/*
* Author : Pinky Mangla
* Date   : November 2020
* Compiler : g++ 4.9.2
* Flags : -std=c++14
* Time complexity : O(1)
* Title : check_whether_ith_bit_is_set_or_not
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"enter the number "<<endl;
	cin>>n;
	int i;
	cout<<"enter index which you want to check"<<endl;
	cin>>i;
	int f=1;
	f=f<<i;
	if((n&f)>0)
	cout<<"yes"<<endl;
	else
	cout<<"no";
}
