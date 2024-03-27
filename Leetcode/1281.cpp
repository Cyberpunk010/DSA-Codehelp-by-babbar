// 1281. Subtract the Product and Sum of Digits of an Integer

#include <iostream>
using namespace std;

class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod = 1;
        int sum = 0;

        while (n != 0) {
            int digit = n % 10;
            prod *= digit;
            sum += digit;
            n /= 10;
        }

        int answer = prod - sum;
        return answer;
    }
};

int main() {
    int n;
    cin >> n;

    Solution sol;
    int result = sol.subtractProductAndSum(n);
    cout << result;

    return 0;
}


