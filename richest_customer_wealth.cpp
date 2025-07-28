// Problem: Richest Customer Wealth (LeetCode #1672)
// Link: https://leetcode.com/problems/richest-customer-wealth/
// Language: C++
// Date Solved: 28 July 2025
// Author: Umi E Ruman
// Goal:To become 1 percent better everday
// Day 2 of my leetcode streak

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
       int maxSum=0;
        for(int i=0;i<accounts.size();i++)
        { int sum=0;
             for(int j=0;j<accounts[i].size();j++)
         { 
           if(i==0)
           maxSum+=accounts[i][j];
            if(i!=0)
            sum+=accounts[i][j];
            if(maxSum<sum)
            maxSum=sum;

        }

        }
         return maxSum;
        
    }
};