// Program: Number Sign Checker
// Description: Reads a number from the user and determines whether it is positive, negative, or zero.
// Author: Umi E Ruman
// Date: 26 March  2025
// Goal: To become 1% better every day

#include <iostream>
using namespace std;

int main() {
    double num;  // Variable to store the user input number

    // Ask the user to enter a number
    cout << "Enter a number: ";
    cin >> num;

    // Display the entered number
    cout << "You entered: " << num << endl;

    // Check whether the number is positive, negative, or zero
    if (num > 0) 
    {
        cout << "The number is positive." << endl;
    } 
    else if (num < 0) 
    {

        cout << "The number is negative." << endl;
    } 
    else 
    {
        cout << "The number is zero." << endl;
    }

    return 0; // End of program
}
