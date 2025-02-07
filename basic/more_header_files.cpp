#include <iostream>
#include <iomanip>  // For controlling decimal places

using namespace std;

int main() {
    int a, b;
    float c, d;

    // Taking integer inputs
    cout << "Enter an integer for a: ";
    cin >> a;
    cout << "Enter an integer for b: ";
    cin >> b;
    
    cout << endl;

    // Taking float inputs
    cout << "Enter a float number for c: ";
    cin >> c;
    cout << "Enter a float number for d: ";
    cin >> d;
    
    cout << endl;

    // Setting decimal precision for floating-point results
    cout << fixed << setprecision(2);

    // Printing sum results
    cout << "Sum of a + b (int + int)      : " << (a + b) << endl;
    cout << "Sum of c + d (float + float)  : " << (c + d) << endl;
    cout << "Sum of c + a (float + int)    : " << (c + a) << endl;
    cout << "Sum of b + c (int + float)    : " << (b + c) << endl;

    return 0;
}
