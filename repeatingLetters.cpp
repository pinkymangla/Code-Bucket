/*
* Author : Pinky Mangla
* Date : May 2020
* Compiler : g++ 4.9.2
* Flags : -std=c++14
* Time complexity :O(n)
* Title : repeating letters
* Example : doubleChar("String") -> "SSttrriinngg"

*/
std::string doubleChar(std::string str) {
	std::string v; 
	for(int i=0;i<str.length();i++){
		v.push_back(str[i]);
		v.push_back(str[i]);
	}
	return v;
}
