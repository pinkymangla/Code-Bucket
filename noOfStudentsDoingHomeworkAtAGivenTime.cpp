/*
* Author : Pinky Mangla
* Date : May 2020
* Compiler : g++ 4.9.2
* Flags : -std=c++14
* Time complexity :O(n)
* Title : no-of-students-doing-homework-at-a-given-time
*/
class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int count = 0;
        for(int i=0;i<startTime.size();i++){

        
            if((queryTime>=startTime[i])&&(endTime[i]>=queryTime))
            count++;
        }
        return count;
    }
};
