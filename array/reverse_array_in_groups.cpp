#include<bits/stdc++.h>
using namespace std;
void reverse_array(int a[],int n,int k){
	for(int i=0;i<n;i+=k){
		int left =i;
		int right = min(i+k-1,n-1);
		while(left<right)
		swap(a[left++],a[right--]);
	}
}
int main(){
	int a[]={-7,1,5,2,-4,3,0};
	int n=sizeof(a)/sizeof(a[0]);
	int k=3;
	reverse_array(a,n,k);
	
for(int i=0;i<n;i++)
cout<<a[i]<<" ";
	return 0;
	}
