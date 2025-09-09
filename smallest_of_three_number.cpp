// Program: Smallest of Three Numbers
// Description: Reads three integers from the user and finds the smallest number.
// Author: Umi E Ruman
// Date: 09 September 2025
// Goal: To become 1% better every day

#include <iostream>
using namespace std;

int main() {
    int number1, number2, number3; // Variables to store three numbers

    // Take three numbers as input
    cout << "Enter number 1: ";
    cin >> number1;
    cout << "Enter number 2: ";
    cin >> number2;
    cout << "Enter number 3: ";
    cin >> number3;

    // Find and display the smallest number
    if (number1 <= number2 && number1 <= number3) 
    {
        cout << "The smallest number is: " << number1 << endl;
    } else if (number2 <= number1 && number2 <= number3) 
    {
        cout << "The smallest number is: " << number2 << endl;
    } else 
    {
        cout << "The smallest number is: " << number3 << endl;
    }

    return 0; // End of program
}
