/*
 * Author : Rohit Shakya
 * Date   : July-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title : Find Missing and duplicate number in array
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={1,2,3,5,5,6,7,8,9,10};
	int n=sizeof(arr)/sizeof(arr[0]);
	int resXor=0;
	for(int i=0;i<n;i++)
	{
		resXor^=arr[i];
	}
	for(int i=1;i<=n;i++)
	{
		resXor^=i;
	}
	int res=resXor;
	int setBit=resXor&~(resXor-1);
	resXor=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]&setBit)
		resXor^=arr[i];
	}
	for(int i=0;i<=n;i++)
	{
		if(i&setBit)
		resXor^=i;
	}
	cout<<resXor;
	cout<<(resXor^res);
}
