#include<bits/stdc++.h>
using namespace std;
int equiIndex(int a[], int n){
	int sum=0;
	int leftsum=0;
	for(int i=0;i<n;i++){
		sum +=a[i];
	}
	for(int i=0;i<n;i++){
		sum -=a[i];
		
		if(sum == leftsum)
		return i;
		leftsum += a[i];
	}
	
	
	
	return -1;
}
int main(){
	int a[]={-7,1,5,2,-4,3,0};
	int n=sizeof(a)/sizeof(a[0]);
	int x= equiIndex(a,n);
	cout<<x<<endl;
	return 0;
	}
