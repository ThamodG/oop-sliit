#include <iostream>

using namespace std;

int multiply(int number);

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int multiple;

    if (number > 0) {
        multiple = multiply(number);
    } else {
        cout << "You have entered a negative number.";
        multiple = multiply(number);
    }

    return 0; 
}

int multiply(int number) {
    int multiple;
    for (int i = 1; i <= 12; i++) {
        multiple = number * i;
        cout << number << " x " << i << " = " << multiple << endl;
    }
    return multiple;
}

