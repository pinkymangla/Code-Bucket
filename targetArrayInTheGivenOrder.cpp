/*
* Author : Pinky Mangla
* Date : May 2020
* Compiler : g++ 4.9.2
* Flags : -std=c++14
* Time complexity :O(n^2)
* Title : smaller number than current
*/
class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
       vector<int> target;
        for(int i=0;i<nums.size();i++){
          target.insert(target.begin()+index[i],nums[i]);
        
        }
        return target;
        
    }
};
