#include <iostream>
using namespace std;

// Function to determine if a year is a leap year
bool is_leap_year(unsigned int Y) {
    // If the year is a century year, check if it's divisible by 400
    if (Y % 100 == 0) {
        return (Y % 400 == 0);
    }
    // For non-century years, check if divisible by 4
    else {
        return (Y % 4 == 0);
    }
}

int main() {
    unsigned int year;

    // Asking the user for input
    cout << "Enter a year: ";
    cin >> year;

    // Checking if the year is a leap year
    if (is_leap_year(year)) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }

    return 0;
}
