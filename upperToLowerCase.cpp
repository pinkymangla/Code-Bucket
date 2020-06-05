/*
* Author : Pinky Mangla
* Date : May 2020
* Compiler : g++ 4.9.2
* Flags : -std=c++14
* Time complexity :O(n)
* Title : upper or lower case
* Example : stepsToConvert("abC") ? 1
// "abC" converted to "abc" in 1 step

stepsToConvert("abCBA") ? 2
// "abCBA" converted to "ABCBA" in 2 steps


*/
int stepsToConvert(std::string str) {
	int upper=0;
	int lower=0;
	for(int i=0;i,str.length();i++){
		if(char(str[i])>=65 ||char(str[i])<=90)
			upper++;
		else lower++;
	}
	if(upper<lower)
		return upper;
	else 
		return lower;
}
