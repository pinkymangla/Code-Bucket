#include<bits/stdc++.h>
using namespace std;
void sort(int a[],int n){
	
	int l=0,m=0;
	int h= n-1;
	while(m<=h){
		switch(a[m]){
			case 0: swap(a[l++],a[m++]);
			break;
			case 1: m++;
			break;
			case 2: swap(a[m],a[h--]);
			break;
		}
		
	}
}
	
	void printArray(int a[],int n){
		for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	}

int main(){
	int a[]={0,1,2,0,1,2};
	int n= sizeof(a)/sizeof(a[0]);
	sort(a,n);
	cout<<"array after segregation"<<endl;
	printArray(a,n);
	return 0;
}
