#include<bits/stdc++.h>
using namespace std;
string removeDup(string &s){
	map<char,bool>m;
	string ans;
	
	for(int i=0;i<s.length();i++){
	
	m.insert(make_pair(s[i],false));
	}
	for(int i=0;i<s.length();i++){
		if(m[s[i]]==false){
			ans += s[i];
			m[s[i]]= true;
		}
	}
	return ans;
}
int main(){
	string s ="aaaaaaa";
	
	cout<<removeDup(s);
}
