#include <iostream>
using namespace std;

void Selectionsort(int arr[] , int n){
    
    for(int i=0; i<n-1; i++){
        int minIndex = i;

        for(int j=i+1; j<n; j++){
            if(arr[minIndex] > arr[j]){
                minIndex = j;
            }
        }
    swap(arr[minIndex],arr[i]);
    }
}

void Printarr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
}

int main(){
    int arr[7] = {6,5,4,9,7,8,3};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<size<<endl;

    Printarr(arr,size);
    Selectionsort(arr,size);
    cout<<endl;
    Printarr(arr,size);

    return 0;

}

// Dry Run

// Given array: {6, 5, 4, 9, 7, 8, 3}

// Initial array: {6, 5, 4, 9, 7, 8, 3}

// Iteration 1:

// Minimum element: 3 (at index 6)
// Swap elements: {3, 5, 4, 9, 7, 8, 6}
// Iteration 2:

// Minimum element: 4 (at index 2)
// Swap elements: {3, 4, 5, 9, 7, 8, 6}
// Iteration 3:

// Minimum element: 5 (at index 1)
// No need to swap
// Iteration 4:

// Minimum element: 6 (at index 0)
// No need to swap
// Iteration 5:

// Minimum element: 7 (at index 4)
// No need to swap
// Iteration 6:

// Minimum element: 8 (at index 5)
// No need to swap
// Iteration 7:

// No need for iteration (last element)
// After all iterations, the array is sorted: {3, 4, 5, 6, 7, 8, 9}