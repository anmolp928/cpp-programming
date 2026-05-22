#include <iostream>
#include <iomanip> // For controlling decimal output precision

using namespace std;

int main() {
    int n;
    double sum = 0.0;

    cout << "Enter the value of n: ";
    cin >> n;

    // Validate input to ensure n is a positive integer
    if (n <= 0) {
        cout << "Please enter a positive integer greater than 0." << endl;
        return 1;
    }

    // Loop through each term from 1 to n
    for (int i = 1; i <= n; ++i) {
        // Use 1.0 to ensure floating-point division
        sum += 1.0 / i;
    }

    // Set output to 4 decimal places for better readability
    cout << fixed << setprecision(4);
    cout << "The sum of the series 1 + 1/2 + ... + 1/" << n << " is: " << sum << endl;

    return 0;
}
