#include <iostream>
using namespace std;

void InsertionSort(int arr[], int n){
    for(int i=1; i<n; i++){
        int temp = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > temp){
            arr[j + 1] = arr[j];
            j--;
        }
        
        arr[j + 1] = temp;
    }
}

void PrintArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    int arr[] = {5, 4, 8, 7, 5, 9, 0};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    PrintArray(arr, size);

    InsertionSort(arr, size);

    cout << "Sorted Array: ";
    PrintArray(arr, size);

    return 0;
}

// Dry Run


// Initialization:

// Original Array: {5, 4, 8, 7, 5, 9, 0}
// size = 7
// Printing Original Array:

// Output: "Original Array: 5 4 8 7 5 9 0"
// Insertion Sort:

// Starting with the second element (index 1), which is 4:

// temp = 4
// j = 0
// Since arr[0] (5) is greater than temp (4), we shift 5 one position to the right.
// Updated array: {5, 5, 8, 7, 5, 9, 0}
// Decrement j to -1 and exit the loop.
// Place temp at the correct position: arr[j + 1] = temp, so arr[0] = 4.
// Array after the first iteration: {4, 5, 8, 7, 5, 9, 0}
// Next, moving to the third element (index 2), which is 8:

// No shifting needed as 8 is greater than the previous element 5.
// Array remains the same.
// Similarly, for the rest of the elements, there is no need for shifting.

// Printing Sorted Array:

// Output: "Sorted Array: 0 4 5 5 7 8 9"
// End of Program.

// The sorted array is {0, 4, 5, 5, 7, 8, 9}.
