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



// Decision Making in C++: Ternary Operator & Switch Case
#include <iostream>
using namespace std;

int main() {

    // -------------------------------
    // 1️⃣  TERNARY OPERATOR EXAMPLE
    // -------------------------------
    // The ternary operator is a shorthand way of writing if-else statements.
    // Syntax: (condition) ? expression_if_true : expression_if_false;

    int a;
    cout << "Enter a number: ";
    cin >> a;

    (a % 2 == 0) ? cout << a << " is even\n" : cout << a << " is odd\n";

    // -------------------------------
    // 2️⃣  SWITCH CASE EXAMPLE
    // -------------------------------
    // The switch statement checks a variable against multiple constant values.

    int day;
    cout << "\nEnter a number (1-7) for day of the week: ";
    cin >> day;

    switch (day) {
        case 1: cout << "Monday\n"; break;
        case 2: cout << "Tuesday\n"; break;
        case 3: cout << "Wednesday\n"; break;
        case 4: cout << "Thursday\n"; break;
        case 5: cout << "Friday\n"; break;
        case 6: cout << "Saturday\n"; break;
        case 7: cout << "Sunday\n"; break;
        default: cout << "Invalid day number!\n"; break;
    }

    return 0;
}