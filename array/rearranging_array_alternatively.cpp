#include<iostream>
#include<vector>
using namespace std;
int main()
{
 int a[] = {1,2,3,4,5,6};
 int i=0;
 	int n = sizeof(a)/sizeof(a[0]);
 	int temp[n];
 	int small=0;
 	int large = n-1;
 	bool flag = true;
 	
 for(int i=0;i<n;i++){
 	if(flag)
 	temp[i] = a[large--];
 	else
 	temp [i] = a[small++];
 	 flag = !flag;
 	
 }
	 for(int i=0;i<n;i++){
	 	cout<<temp[i]<<" ";
	 }

}
