#include<bits/stdc++.h>
using namespace std;
void findLeader(int a[],int n){
	int max = a[n-1];
	cout<<max<<" ";
	for(int i = n-2;i>0;i--){
		if(max<a[i]){
			max = a[i];
			cout<<a[i]<<" ";
		}
	}
}
int main(){
	int a[] = {16,17,4,3,5,2};
	int n = sizeof(a)/sizeof(a[0]);
	findLeader(a,n);
	
	return 0;
	
}
