// Problem: How Many Numbers Are Smaller Than the Current Number (LeetCode #1365)
// Link: https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/
// Language: C++
// Date Solved: 29 July 2025
// Author: Umi E Ruman
// Day 3 of my LeetCode streak
// Goal: To become 1% better every day 
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
         int comparision;
vector<int> sum(nums.size());    
        for(int i=0;i<nums.size();i++)
        {  comparision=nums[i];
              for(int j=0;j<nums.size();j++)
            { if(comparision>nums[j])
          sum[i]+=1;
        
            };

        }
        return sum;
    }
};