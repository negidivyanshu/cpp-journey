// ============================================
// 📘 C++ Basics Practice
// Author: Divyanshu Negi
// Description: Basic C++ programs demonstrating
//              simple interest, area, typecasting,
//              operator hierarchy, and char datatype.
// ============================================

#include <iostream>
using namespace std;

int main() {
    // --------------------------------------------
    // 🧮 1. Calculating Simple Interest
    // Formula: (P × R × T) / 100
    // --------------------------------------------
    float p = 5000; // Principal amount (in Rs)
    float t = 2;    // Time (in years)
    float r = 5;    // Rate of interest (in %)
    float si = (p * r * t) / 100;
    cout << "Simple Interest on Rs " << p
         << " at " << r << "% for " << t
         << " years = Rs " << si << endl;

    cout << "------------------------------------------" << endl;

    // --------------------------------------------
    // ⚪ 2. Area of a Circle
    // Formula: π × r²
    // --------------------------------------------
    float radius = 4.3;
    float area = 3.14 * radius * radius;
    cout << "Area of circle with radius " << radius
         << " = " << area << endl;

    cout << "------------------------------------------" << endl;

    // --------------------------------------------
    // ➕ 3. Adding Two Numbers (User Input)
    // --------------------------------------------
    int x, y;
    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;
    cout << "Sum = " << x + y << endl;

    cout << "------------------------------------------" << endl;

    // --------------------------------------------
    // 🔄 4. Typecasting Example
    // Input: Integer → Output: Half of its value (float)
    // --------------------------------------------
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    float half = static_cast<float>(num) / 2;
    cout << "Half of " << num << " = " << half << endl;

    cout << "------------------------------------------" << endl;

    // --------------------------------------------
    // 🧠 5. Operator Hierarchy Example
    // C++ follows BODMAS; in case of equal precedence
    // (e.g., * and /), evaluation happens left to right.
    // --------------------------------------------
    int result = 2 * 3 / 4; // Evaluates (2*3)=6, then 6/4=1
    cout << "Result of (2 * 3 / 4) = " << result << endl;

    cout << "------------------------------------------" << endl;

    // --------------------------------------------
    // 🔤 6. Character Input & ASCII Value
    // --------------------------------------------
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    cout << "You entered: " << ch
         << " | ASCII value: " << int(ch) << endl;

    cout << "------------------------------------------" << endl;

    return 0;
}
