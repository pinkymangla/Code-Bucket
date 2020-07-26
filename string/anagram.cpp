/*
* Author : Pinky Mangla
* Date : May 2020
* Compiler : g++ 4.9.2
* Flags : -std=c++14
* Time complexity :O(n)
* Title :  anagram(LISTEN and SILENT are anagrams as both have same number of same letters)
*/
#include<bits/stdc++.h>
using namespace std;
#define NO_OF_CHARS 256
bool anagram(string& str1,string &str2){
	int n1=str1.length();
	int n2 = str2.length();
	if(n1!=n2)
	return false;
	
	int count1[NO_OF_CHARS]={0};
	int count2[NO_OF_CHARS]={0};
	for(int i=0;str1[i]&&str2[i];i++){
		count1[str1[i]]++;
		count2[str2[i]]++;
	}
	for(int i=0;i<NO_OF_CHARS;i++){
		if(count1[i]!=count2[i])
		return false;
		return true;
}
	
}
int main(){
	string str1="silent";
	string str2="listen";
	
	if(anagram(str1,str2))
	cout<<"the strings are anagram"<<endl;
	else
	cout<<"the strings are not anagram"<<endl;
	return 0;
}
