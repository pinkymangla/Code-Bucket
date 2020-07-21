#include<bits/stdc++.h>
using namespace std;
int choco(int a[],int n,int m){
	if(n==0||m==0)
	return 0;
	if(m>n)
	return -1;
	int min=INT_MAX;
	sort(a,a+n);
	for(int i=0;i+m-1<n ;i++){
		
	int sub = a[i+m-1]-a[i];
	if(sub<min)
	min = sub;
	}
	return min;
}
int main(){
	int a[] = { 12,4,7,9,2,23,41,30,40,28,42,30,44,48,43,50};
	int n = sizeof(a)/sizeof(a[0]);
	int m = 7;
	cout<<choco(a,n,m);
	return 0;
}
