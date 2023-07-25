#include <iostream>

using namespace std;

int main() {
    int num1, num2, num3;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    if (num1 > num2) {
        swap(num1, num2);
    }
    if (num2 > num3) {
        swap(num2, num3);
    }
    if (num1 > num2) {
        swap(num1, num2);
    }

    cout << "Numbers in ascending order: "
         << num1 << " " << num2 << " " << num3 << endl;

    return 0;
}
