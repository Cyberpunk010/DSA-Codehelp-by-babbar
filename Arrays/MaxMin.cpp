#include <iostream>
#include <climits> // For INT_MIN and INT_MAX
using namespace std;

int findMax(int arr[], int size) {
    int max = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int findMin(int arr[], int size) {
    int min = INT_MAX;

    for (int i = 0; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    return min;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int num[size];

    cout << "Enter " << size << " numbers: ";
    for (int i = 0; i < size; i++) {
        cin >> num[i];
    }

    cout << "Numbers entered:" << endl;
    for (int i = 0; i < size; i++) {
        cout << num[i] << endl;
    }

    int maxres = findMax(num, size);
    int minres = findMin(num, size);

    cout << "Largest number: " << maxres << endl;
    cout << "Smallest number: " << minres << endl;

    return 0;
}
