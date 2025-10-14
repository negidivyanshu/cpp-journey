// ============================================
// 📘 IF-ELSE STATEMENTS IN C++
// Author: Divyanshu Negi
// Description: Demonstrates conditional statements
// (if, else if, else) using examples such as
// even/odd check and 3-digit number check.
// ============================================

#include <iostream>
using namespace std;

int main() {
    // --------------------------------------------
    // 🔹 1. Even or Odd Number
    // --------------------------------------------
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0)
        cout << num << " is an even number." << endl;
    else
        cout << num << " is an odd number." << endl;

    cout << "------------------------------------------" << endl;

    // --------------------------------------------
    // 🔹 2. Check if a Number is a 3-Digit Number
    // --------------------------------------------
    int n;
    cout << "Enter another number: ";
    cin >> n;

    if (n >= 100 && n <= 999)
        cout << n << " is a 3-digit number." << endl;
    else
        cout << n << " is not a 3-digit number." << endl;

    cout << "------------------------------------------" << endl;

    // --------------------------------------------
    // 🔹 3. Example with if-else-if Ladder
    // --------------------------------------------
    int marks;
    cout << "Enter your marks (0-100): ";
    cin >> marks;

    if (marks >= 90)
        cout << "Grade: A+" << endl;
    else if (marks >= 75)
        cout << "Grade: A" << endl;
    else if (marks >= 60)
        cout << "Grade: B" << endl;
    else if (marks >= 40)
        cout << "Grade: C" << endl;
    else
        cout << "Grade: F (Fail)" << endl;

    return 0;
}
