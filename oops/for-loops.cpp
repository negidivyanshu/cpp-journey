// ===============================
//  Loops in C++
//  Demonstrates for loop, printing patterns,
//  even numbers, and AP/GP sequences
// ===============================

#include <iostream>
using namespace std;

int main() {

    // -----------------------------------
    // 1️⃣ Print "Hello World" 10 times
    // -----------------------------------
    for (int i = 1; i <= 10; i++) {
        cout << "Hello World" << endl;
    }

    // -----------------------------------
    // 2️⃣ Print all even numbers from 1 to 100
    // -----------------------------------
    cout << "\nEven numbers from 1 to 100:\n";
    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    // -----------------------------------
    // 3️⃣ Print multiples of 19 (method 2)
    // -----------------------------------
    cout << "\nMultiples of 19 up to 190:\n";
    for (int i = 19; i <= 190; i += 19) {
        cout << i << " ";
    }
    cout << endl;

    // -----------------------------------
    // 4️⃣ Arithmetic Progression (AP)
    // Formula: a, a + d, a + 2d, a + 3d, ...
    // -----------------------------------
    cout << "\nArithmetic Progression (AP) Example:\n";
    int a = 3;   // first term
    int d = 5;   // common difference
    int n = 10;  // number of terms

    for (int i = 0; i < n; i++) {
        cout << a + i * d << " ";
    }
    cout << endl;

    // -----------------------------------
    // 5️⃣ Geometric Progression (GP)
    // Formula: a, a*r, a*r^2, a*r^3, ...
    // -----------------------------------
    cout << "\nGeometric Progression (GP) Example:\n";
    int a1 = 2;  // first term
    int r = 3;   // common ratio
    int terms = 7; // number of terms

    int term = a1;
    for (int i = 0; i < terms; i++) {
        cout << term << " ";
        term *= r;
    }
    cout << endl;

    return 0;
}
