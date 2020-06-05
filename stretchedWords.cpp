/*
* Author : Pinky Mangla
* Date : May 2020
* Compiler : g++ 4.9.2
* Flags : -std=c++14
* Time complexity :O(n)
* Title :  returns a new string with any duplicate consecutive letters removed.
* Example : unstretch("ppoeemm") ? "poem"
*/
std::string unstretch(std::string word) {
  std::string s;
	for(int i=0;i<word.length();i++){
		while(word[i]==word[i+1]){
			i++;
		}
		
			s.push_back(word[i]);
	}
	return s;
}
