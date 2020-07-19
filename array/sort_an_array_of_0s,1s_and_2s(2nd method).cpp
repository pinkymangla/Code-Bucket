#include<bits/stdc++.h>
using namespace std;
int countways(int a[],int n){
	int cnt0=0,cnt1=0,cnt2=0;
	for(int i=0;i<n;i++){
		switch(a[i]){
			case 0: cnt0++;
			break;
			case 1: cnt1++;
			break;
			case 2: cnt2++;
			break;
			
		}
	}
	int i=0;
	while(cnt0>0){
	
	a[i++]=0;
	cnt0--;
}
while(cnt1>0){
	
	a[i++]=1;
	cnt1--;
}
while(cnt2>0){
	
	a[i++]=2;
	cnt2--;
}

	
}
void printArray(int a[],int n){
		for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
}
int main(){
	int a[]={0,1,2,0,1,2};
	int n= sizeof(a)/sizeof(a[0]);
	countways(a,n);
	cout<<"array after segregation"<<endl;
	printArray(a,n);
	return 0;
}
