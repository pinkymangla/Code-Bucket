
* Author : Pinky Mangla
* Date : May 2020
* Compiler : g++ 4.9.2
* Flags : -std=c++14
* Time complexity :O(n)
* Title : change every letter to next letter
*/


std::string move(std::string word) {
	for(int i=0;i<word.length();i++){
		word[i] = char(word[i])+1;
	}
	return word;
}
