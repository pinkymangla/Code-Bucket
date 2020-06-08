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
    int maxProduct(vector<int>& nums) {
        int temp;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]<nums[j]){
                    temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
                
            }
        }
        
        int x = (nums[0]-1)*(nums[1]-1);
        return x;
    }
};
