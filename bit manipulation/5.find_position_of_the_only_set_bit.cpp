/*
* Author : Pinky Mangla
* Date   : November 2020
* Compiler : g++ 4.9.2
* Flags : -std=c++14
* Time complexity : O(logn)
* Title : find_position_of_the_only_set_bit
*/

#include<bits/stdc++.h>
using namespace std;

	bool isPowerOfTwo(int n){
	return(!(n&(n&(n-1))));
	}
	int findPosition(int n){
		if(!(isPowerOfTwo(n)))
		return -1;
		
		int pos=0;
		for(int i=1;i<32;i++){
			if(n&(1<<i))
			pos=i;
		}
		return (pos+1);
	}
	int main(){
		int n;
		cout<<"enter the number"<<endl;
		cin>>n;
		int pos=findPosition(n);
		if(findPosition(n)==-1)
		cout<<"invalid number";
		else
		cout<<"position of only set bit "<<pos<<endl;
	}

