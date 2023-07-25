#include <iostream>

int main() {
    int rows;

    std::cout << "Enter the number of rows: ";
    std::cin >> rows;

    // Upper half of the pattern
    for (int i = 1; i <= rows; i++) {
        for (int space = 1; space <= rows - i; space++) {
            std::cout << " ";
        }

        for (int j = 1; j <= i; j++) {
            std::cout << "*";
        }
        
        std::cout << std::endl;
    }

    // Lower half of the pattern
    for (int i = rows - 1; i >= 1; i--) {
        for (int space = 1; space <= rows - i; space++) {
            std::cout << " ";
        }

        for (int j = 1; j <= i; j++) {
            std::cout << "*";
        }

        std::cout << std::endl;
    }

    return 0;
}

