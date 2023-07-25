#include <iostream>

using namespace std;

int main() {
    double celsius, fahrenheit;

    cout << "Enter the temperature in Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    cout << "Temperature in Fahrenheit: " << fahrenheit << " °F" << endl;

    return 0;
}

