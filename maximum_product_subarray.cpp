// Problem: Maximum Product Subarray (LeetCode #152)
// Link: https://leetcode.com/problems/maximum-product-subarray/
// Description: This program finds the contiguous subarray within a one-dimensional array of numbers which has the largest product.
// Algorithm: Modified Kadane’s Algorithm (handles negative numbers and zeros via dual traversal)
// Author: Umi E Ruman
// Date: 07-06-2025
// Goal: To become one percent better everyday
// LeetCode Streak Day: 05

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // Edge case: If the input array is empty, return 0
        if (nums.empty()) 
            return 0;

        // Initialize running product and maximum product
        int currentProduct = 1;
        int maximumProduct = INT_MIN;

        // First pass: Traverse from left to right
        for (int i = 0; i < nums.size(); i++) {
            currentProduct *= nums[i]; // Multiply current element to the product
            maximumProduct = max(currentProduct, maximumProduct); // Update max product

            // Reset the current product if it becomes zero
            if (currentProduct == 0)
                currentProduct = 1;
        }

        // Reset currentProduct for right to left pass
        currentProduct = 1;

        // Second pass: Traverse from right to left
        for (int j = static_cast<int>(nums.size()) - 1; j >= 0; j--) {
            currentProduct *= nums[j]; // Multiply current element to the product
            maximumProduct = max(currentProduct, maximumProduct); // Update max product

            // Reset the current product if it becomes zero
            if (currentProduct == 0)
                currentProduct = 1;
        }

        // Return the maximum product found in any subarray
        return maximumProduct;
    }
};
