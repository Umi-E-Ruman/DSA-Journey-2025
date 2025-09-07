// Problem: Build Array from Permutation (LeetCode 1920)
// Description: 
//   Given a zero-based permutation array `nums` (0-indexed), 
//   we build an array `ans` of the same length where:
//      ans[i] = nums[nums[i]]
//   The task is to return the array `ans`.
//
// Example: 
//   Input: nums = [0,2,1,5,3,4]
//   Output: [0,1,2,4,5,3]
//
// Constraints: 
//   - 1 <= nums.length <= 1000
//   - 0 <= nums[i] < nums.length
//   - The elements in nums are unique
//
// Author: Umi E Ruman
// Date: 07-09-2025
// Goal: To become one percent better everyday
// Mistake:initializing answer vector without size causing runtime error because vector was empty to store value
class Solution 
{
public:
    vector<int> buildArray(vector<int>& nums) 
    { 
        // Create an answer vector of same size as nums
        vector<int> answer(nums.size());
        
        // Loop through each index and apply ans[i] = nums[nums[i]]
        for (int i = 0; i < nums.size(); i++) {
            answer[i] = nums[nums[i]];
        }

        // Return the constructed array
        return answer;
    }
};
