#include<bits/stdc++.h>
using namespace std;
bool py_triplet(int a[],int n){
	for(int i=0;i<n;i++){
		a[i] = a[i]*a[i];
	}
 sort(a,a+n);
 int i=0;
 
 for(int i=n-1;i>=2;i--){
 
 	int left=0;
 	int right= i-1;
 	 while(left<right){
 	 	if(a[left]+a[right]==a[i])
 	 	return true;
 	 	
 	 	a[left]+a[right]>a[i]?right--:left++;
	  }
 	 
 }
 4 5 6 10 12
 16 25 36 100 144
 
return false;
}
int main(){
	int a[] ={10,4,6,12,5};
	int n = sizeof(a)/sizeof(a[0]);
	 py_triplet(a,n)? cout<<"yes" : cout<<"no";

}
