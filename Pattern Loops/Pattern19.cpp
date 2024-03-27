// * * * *
// * * *
// * *
// *

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int row = n;

    // Loop for each row
    while (row >= 1) {
        int col = 1;

        // Print stars for the current row
        while (col <= row) {
            cout << "* ";
            col++;
        }

        // Move to the next line after printing stars
        cout << endl;

        // Move to the next row
        row--;
    }

    return 0;
}
