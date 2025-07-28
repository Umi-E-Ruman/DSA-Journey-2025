// Problem: Running Sum of 1D Array (LeetCode #1480)
// Link: https://leetcode.com/problems/running-sum-of-1d-array/
// Language: C++
// Date Solved: 27 July 2025
// Author: Umi E Ruman
//Goal: Goal:To become 1 percent better everday
// Day 1 of my LeetCode streak
class Solution {
public:
    
    vector<int> runningSum(vector<int>& nums) {
        vector<int> sumOfElement(nums.size());
        int sum=nums[0];
        sumOfElement[0]=nums[0];
       
      
        for(int i=1;i<nums.size();i++)
        {  sum+=nums[i];
            sumOfElement[i]+=sum;
       

         
        

        }
        return sumOfElement;
        }
        
    
};