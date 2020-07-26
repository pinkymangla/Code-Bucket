/*
* Author : Pinky Mangla
* Date : july 2020
* Compiler : g++ 4.9.2
* Flags : -std=c++14
* Time complexity :O(n)
* Title :  length of longest substring without rerpeating characters
*/
#include<bits/stdc++.h>
using namespace std;
int max_length(string str){
	int n = str.length();
	int res =0;
	for(int i=0;i<n;i++){
		vector<bool>visited(26);
		for(int j=i;j<n;j++){
			if(visited[str[j]]==true)
			break;
			else{
				res = max(res,j-i+1);
				visited[str[j]]=true;
			}	
		}
		visited[str[i]]=false;
	} 
	return res;
}
int main(){
	string str = "geeksforgeeks";
	int length = max_length(str);
	cout<<"length is = "<<length<<" ";
	return 0;
}


