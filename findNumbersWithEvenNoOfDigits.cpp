/*
* Author : Pinky Mangla
* Date : May 2020
* Compiler : g++ 4.9.2
* Flags : -std=c++14
* Time complexity :O(n)
* Title : find-numbers-with-even-no-of-digits
*/
class Solution {
public:
    int findNumbers(vector<int>& nums) {
       
        int count = 0;
        for(int i=0;i<nums.size();i++){
           
            if(to_string(nums[i]).length()%2==0)
                count++;
        }
        return count;
    }
};
