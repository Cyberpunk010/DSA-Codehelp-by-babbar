// 344. Reverse String

#include<string>
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:

    void reverseString(vector<char>& s) {
        int st=0;
        int e = s.size()-1;

        while(st<e) {
            swap(s[st++], s[e--]);
        }
    }
};

// int main() {
//     vector<char> input = {'h', 'e', 'l', 'l', 'o'};
//     Solution solution;
    
//     cout << "Original string: ";
//     for(char ch : input) {
//         cout << ch;
//     }
//     cout << endl;

//     solution.reverseString(input);

//     cout << "Reversed string: ";
//     for(char ch : input) {
//         cout << ch;
//     }
//     cout << endl;

//     return 0;
// }


// Dry Run
// Original string: hello
// Reversed string: olleh
// Explanation:

// The reverseString function reverses the characters in the input vector s using a two-pointer approach.
// It initializes two pointers st and e pointing to the start and end of the vector respectively.
// It then swaps characters at positions pointed by st and e, incrementing st and decrementing e, until st becomes greater than or equal to e, effectively reversing the string.
// In the main function, we create an input vector with characters 'h', 'e', 'l', 'l', 'o'.
// We print the original string, then call the reverseString function to reverse it, and finally print the reversed string.