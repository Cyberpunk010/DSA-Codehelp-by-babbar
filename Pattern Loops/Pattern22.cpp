// 1 
// 2 3 
// 4 5 6 
// 7 8 9 0 
//   0 9 0 
//   0 9 0 
//     9 0 
//     9 
//   0 9 
//   0 9 0 
//   9 0 9 0 
//   9 0 9 8 7 
// 6 5 4 3 2 1

#include <iostream>

int main() {
    int n = 1;
    int m = 7;

    // Print the first part of the pattern
    for (int i = 1; i <= 6; ++i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << n++ % 10 << " ";
        }
        std::cout << std::endl;
    }

    // Print the second part of the pattern
    for (int i = 1; i <= 4; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (j <= 6 - i || j > 7 + i) {
                std::cout << "  ";
            } else {
                std::cout << n++ % 10 << " ";
            }
        }
        std::cout << std::endl;
    }

    // Print the third part of the pattern
    for (int i = 4; i >= 1; --i) {
        for (int j = 1; j <= m; ++j) {
            if (j <= 6 - i || j > 7 + i) {
                std::cout << "  ";
            } else {
                std::cout << n++ % 10 << " ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}

