// Problem: Pow(x, n) (LeetCode 50)
// Link: https://leetcode.com/problems/powx-n/
//
// Description: 
//   Implement pow(x, n), which calculates x raised to the power n x^n
//   The solution must be efficient even for large n values.
//
// Constraints: 
//   - -100.0 < x < 1
//   Input: x = 2.00000, n = 10
//   Output: 1024.00000
//   Input: x = 2.10000.0
//   - -2^31 <= n <= 2^31-1
//   - n is an integer
//   - Either x is not zero or n > 0
//   - -10^4 <= x^n <= 10^4
//
// Time Complexity: O(log n)   // Exponentiation by squaring
// Space Complexity: O(log n)  // Due to binary representation storage
//
// Author: Umi E Ruman
// Date: 08-09-2025
// Goal: To become one percent better everyday

class Solution {
public:
    double myPow(double x, int n) {
        long long N = n;          // Use long long to handle -2^31 case safely
        int reminder;
        double answer = 1;        // Final result
        vector<int> binaryForm;   // To store binary representation of exponent

        // Handle negative exponent:
        //   If n < 0, we compute 1/x^n instead of x^n
        if (N < 0) {
            N = -N;   // Make exponent positive
            x = 1 / x; // Flip x to reciprocal
        }

        // Convert exponent N into binary representation
        while (N != 0) {
            reminder = N % 2;           // Extract last bit (0 or 1)
            binaryForm.push_back(reminder); 
            N /= 2;                     // Shift right (divide by 2)
        }

        // Process the binary form of exponent
        for (int i = 0; i < binaryForm.size(); i++) {
            if (binaryForm[i] == 1)     // If bit is 1, multiply current x
                answer *= x;
            x = x * x;                  // Square x for next binary position
        }

        return answer;  // Return the computed power
    }
};
// Notes for Revision
/*Power Function (x^n) — Binary Exponentiation

Brute force = multiply x n times → O(n) (too slow).

Optimized = Binary Exponentiation → O(log n).

Steps:

If n < 0: set x = 1/x, n = -n (handle negatives safely with long long).

While n > 0:

If n is odd → ans *= x.

Square the base → x = x * x.

Half the power → n = n / 2.

Return ans.

Key insight:

%2 and /=2 automatically process n’s binary digits from least → most significant bit.

That’s why no reverse is needed.

Cheat line:
“Multiply on odd, always square, half the power.” /*
