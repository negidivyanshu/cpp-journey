// ============================================
// 📘 VARIABLES IN C++
// Author: Divyanshu Negi
// Description: Demonstrates declaration,
// initialization, data types, constants,
// and variable scope in C++.
// ============================================

#include <iostream>
using namespace std;

int main() {
    // --------------------------------------------
    // 🔹 1. Declaration and Initialization
    // --------------------------------------------
    int age = 21;            // integer type
    float height = 5.9;      // floating-point type
    char grade = 'A';        // character type
    bool isStudent = true;   // boolean type
    double pi = 3.14159265;  // double precision floating-point

    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
    cout << "Grade: " << grade << endl;
    cout << "Is Student: " << isStudent << endl;
    cout << "Pi value: " << pi << endl;

    cout << "------------------------------------------" << endl;

    // --------------------------------------------
    // 🔹 2. Multiple Declarations
    // --------------------------------------------
    int x = 10, y = 20, z = 30;
    cout << "x: " << x << ", y: " << y << ", z: " << z << endl;

    cout << "------------------------------------------" << endl;

    // --------------------------------------------
    // 🔹 3. Constant Variables
    // 'const' keyword makes the variable unchangeable
    // --------------------------------------------
    const float GST = 0.18;
    float amount = 1000;
    cout << "Amount: " << amount << endl;
    cout << "GST (18%): " << amount * GST << endl;
    cout << "Total with GST: " << amount + (amount * GST) << endl;

    cout << "------------------------------------------" << endl;

    // --------------------------------------------
    // 🔹 4. Variable Scope Example
    // Local variables are accessible only inside their block
    // --------------------------------------------
    int outerVar = 50;
    {
        int innerVar = 10;
        cout << "Inside block: innerVar = " << innerVar << endl;
        cout << "Inside block: outerVar = " << outerVar << endl;
    }
    // cout << innerVar; // ❌ Error: innerVar not accessible here
    cout << "Outside block: outerVar = " << outerVar << endl;

    cout << "------------------------------------------" << endl;

    // --------------------------------------------
    // 🔹 5. Variable Reassignment
    // --------------------------------------------
    int score = 90;
    cout << "Initial Score: " << score << endl;
    score = 95; // updated value
    cout << "Updated Score: " << score << endl;

    return 0;
}
