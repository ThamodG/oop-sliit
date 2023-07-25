#include <iostream>

using namespace std;

int main() {
    double celsius, fahrenheit;

    cout << "Enter the temperature in Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    if (fahrenheit > 300.0) {
        cout << "Alert! Surface is too hot" << endl;
        return 1;
    }

    cout << "Temperature in Fahrenheit: " << fahrenheit << " °F" << endl;

    return 0;
}

