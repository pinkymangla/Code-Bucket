#include<bits/stdc++.h>
using namespace std;
void revWords(string &s){
	reverse(s.begin(),s.end());
		int start=0;
	for(int i=0;i<s.length();i++){
	
		int end=i;
	if(s[i]==' '){
	
	reverse(s.begin()+start,s.begin()+end);
	start = end+1;
	
	}
	
}
	reverse(s.begin()+start,s.end());
}
int main(){
	string s = "i like this program very much";
	revWords(s);
	cout<<s;
	return 0;
	
}
