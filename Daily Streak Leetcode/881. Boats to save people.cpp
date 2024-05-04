// 881. Boats to Save People.cpp                     4-may-2024

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size();
        sort(begin(people), end(people));
        int boats = 0;
        int i = 0, j = n - 1;

        while (i <= j) {
            if (people[i] + people[j] <= limit) {
                i++;
                j--;
            } else {
                j--;
            }
            boats++;
        }
        return boats;
    }
};

int main() {
    Solution sol;
    vector<int> people;
    int limit, n, weight;
    
    cout << "Enter the number of people: ";
    cin >> n;
    
    cout << "Enter the weights of people: ";
    for (int i = 0; i < n; i++) {
        cin >> weight;
        people.push_back(weight);
    }
    
    cout << "Enter the weight limit of each boat: ";
    cin >> limit;

    int numBoats = sol.numRescueBoats(people, limit);
    cout << "Number of boats required: " << numBoats << endl;

    return 0;
}
