/*
* Author : Pinky Mangla
* Date   : November 2020
* Compiler : g++ 4.9.2
* Flags : -std=c++14
* Time complexity : O(n)
* Title : count_total_set_bits_in_all_number_from_1_to_n
*/


#include<bits/stdc++.h>
using namespace std;
int main(){
	int num=0,count=0;
	cout<<"enter the number"<<endl;
	cin>>num;

	for(int i=0;i<=num;i++){
	int n=i;
	while(n){
		count++;
		n=n&(n-1);
		
	}
}
	cout<<"number of set bits "<<count<<endl;
}
