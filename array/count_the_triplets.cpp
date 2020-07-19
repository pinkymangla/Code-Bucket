#include<bits/stdc++.h>
using namespace std;
int countWays(int a[],int n){
	int max_value=0;
	for(int i=0;i<n;i++){
		max_value = max(max_value,a[i]);
	}
	int freq[max_value+1]={0};

	for(int i=0;i<n;i++)
	freq[a[i]]++;
	int ans=0;
	//case 1: 0,0,0
	ans += freq[0]*(freq[0]-1)*(freq[0]-2)/6;
	//case 2: 0,x,x
	for(int i=1;i<=max_value;i++)
	ans += freq[0]*(freq[i])*(freq[i]-1/2);
	//case 3: x,x,2x
	for(int i=1;2*i<=max_value;i++)
	ans += freq[i]*freq[i-1]/2*freq[2*i];
	//case 4:x,y,x+y
	for(int i=1;i<=max_value;i++)
	for(int j=i+1;i+j<=max_value;j++)
	ans += freq[i]*freq[j]*freq[i+j];
	return ans;
}
int main(){
	int a[]={1,2,3,4,5,6};
	int n= sizeof(a)/sizeof(a[0]);
	int c = countWays(a,n);
	cout<<c<<endl;
	return 0;
}
