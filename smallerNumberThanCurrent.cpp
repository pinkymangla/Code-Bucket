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
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>v;
        
        for(int i=0;i<nums.size();i++){
            int count=0;
            for(int j=0;j<nums.size();j++){
            if(nums[i]>nums[j])
                count++;
                
                }
            v.push_back(count);
            
        }
        return v;
    }
};
