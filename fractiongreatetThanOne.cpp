/*
* Author : Pinky Mangla
* Date : May 2020
* Compiler : g++ 4.9.2
* Flags : -std=c++14
* Time complexity :O(1)
* Title : fraction greater than one
* Example : greaterThanOne("1/2") -> false
greaterThanOne("7/4") -> true
*/
bool greaterThanOne(std::string frac) {
	char f1=frac[0];
 char f2=frac[1];
	int x=0;
	int y=0;
	std::stringstream s1(f1);
		s1>>x;
	std::stringstream s2(f1);
		s2>>y;
	int fraction = x/y;
	if(fraction>1)
		return true;
	else 
		return false;
}
