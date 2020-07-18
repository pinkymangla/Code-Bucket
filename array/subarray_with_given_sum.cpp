#include<bits/stdc++.h>
using namespace std;
int getsum(int arr[],int n,int sum){
	int sum1=arr[0],start=0;
	for(int i=1;i<=n;i++){
	while(sum1>sum&&start<i-1){
	
	sum1 = sum1-arr[start];
	start++;
}
	
	if(sum1==sum){
	
	cout<<"sum founded between the inexes"<<start<<"and"<<i-1<<endl;
	 
	 return 1;
	 
}
if(i<n)
sum1 = sum1+arr[i];

}
cout<<"no subarray found"<<endl;	
	
		return 0;
}
int main(){
	int arr[]={1,4,10,3,20,6};
	int sum=33;
	int n = sizeof(arr)/sizeof(arr[0]);
	getsum(arr,n,sum);
	return 0;
}
