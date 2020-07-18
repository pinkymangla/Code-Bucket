#include<bits/stdc++.h>
using namespace std;
int maxSubArraySum(int arr[],int n){
	int meh = arr[0];
	int msf = arr[0];
	for(int i=1;i<n;i++){
		meh = meh + arr[i];
		if(meh<arr[i])
		meh = arr[i];
		if(msf<meh)
		msf = meh;
	}
	return msf;
	
}
int main(){
	int arr[]={-2,-3,4,-1,-2,1,5,-3};
	int n= sizeof(arr)/sizeof(arr[0]);
	int sum=maxSubArraySum(arr,n);
	cout<<sum;
	return 0;
}
