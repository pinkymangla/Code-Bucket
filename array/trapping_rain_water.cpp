/*
* Author : Pinky Mangla
* Date : july 2020
* Compiler : g++ 4.9.2
* Flags : -std=c++14
* Time complexity :O(n)
* Title :  trapping rain water
*/
#include<bits/stdc++.h>
using namespace std;
int trappingRainWater(int a[],int n){
	int left[n];
	int right[n];
	int result=0;
	left[0]=a[0];
	for(int i=1;i<n;i++){
		left[i] = max(left[i-1],a[i]);
	}
	right[n-1] = a[n-1];
	for(int i=n-2;i>=0;i--){
		right[i] = max(right[i+1],a[i]);
	}
	for(int i=0;i<n;i++){
		result += min(left[i],right[i])-a[i];
		
	}
	return result;
	
}
int main(){

int a[] = { 0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1 }; 
    int n = sizeof(a) / sizeof(a[0]); 
    cout << "Maximum water that can be accumulated is "
         << trappingRainWater(a, n); 
    return 0;


}

