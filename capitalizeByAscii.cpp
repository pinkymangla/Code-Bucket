/*
* Author : Pinky Mangla
* Date : May 2020
* Compiler : g++ 4.9.2
* Flags : -std=c++14
* Time complexity :O(n)
* Title :  capitalizes a letter if its ASCII code is even and returns its lower case version if its ASCII code is odd

*/
std::string asciiCap(std::string str) {
for(int i=0;i<str.length();i++){
	if(!((char)str[i]&1)){
	if((char)str[i]>=96 &&(char)str[i]<=122)
		str[i] =(char)str[i]-32;
	} //even
	else{
		if((char)str[i]>=65 &&(char)str[i]<=90)
		str[i] = (char)str[i]+32;
		
	}//odd
		
}
	return str;
}

