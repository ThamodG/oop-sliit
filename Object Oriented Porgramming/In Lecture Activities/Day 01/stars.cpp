#include <iostream>

int main() {
    int rows = 5;
    
    // Upper half of the pattern
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
            std::cout << "  ";  // Print spaces
        }
        
        for (int k = 1; k <= i; k++) {
            std::cout << "* ";  // Print asterisks
        }
        
        std::cout << std::endl;  // Move to the next line
    }
    
    // Lower half of the pattern
    for (int i = rows - 1; i >= 1; i--) {
        for (int j = 1; j <= rows - i; j++) {
            std::cout << "  ";  // Print spaces
        }
        
        for (int k = 1; k <= i; k++) {
            std::cout << "* ";  // Print asterisks
        }
        
        std::cout << std::endl;  // Move to the next line
    }
    
    return 0;
}

