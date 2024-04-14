#include <iostream>
using namespace std;

void Selectionsort(int arr[] , int n){
    
    for(int i=1; i<n; i++){
        bool swapped = false;

        for(int j=0; j<n-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }

        if(swapped == false){
            break;
        }
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

// Let's dry run the modified code:

// Given array: {6, 5, 4, 9, 7, 8, 3}

// Initial array: {6, 5, 4, 9, 7, 8, 3}

// Iteration 1:

// Compare 6 and 5, swap as 6 > 5. Array becomes {5, 6, 4, 9, 7, 8, 3}
// Compare 6 and 4, swap as 6 > 4. Array becomes {5, 4, 6, 9, 7, 8, 3}
// Compare 6 and 9, no swap.
// Compare 9 and 7, swap as 9 > 7. Array becomes {5, 4, 6, 7, 9, 8, 3}
// Compare 9 and 8, swap as 9 > 8. Array becomes {5, 4, 6, 7, 8, 9, 3}
// Compare 9 and 3, swap as 9 > 3. Array becomes {5, 4, 6, 7, 8, 3, 9}
// No swaps in the last iteration.
// Iteration 2:

// Compare 5 and 4, swap as 5 > 4. Array becomes {4, 5, 6, 7, 8, 3, 9}
// Compare 5 and 6, no swap.
// Compare 6 and 7, no swap.
// Compare 7 and 8, no swap.
// Compare 8 and 3, swap as 8 > 3. Array becomes {4, 5, 6, 7, 3, 8, 9}
// Compare 8 and 9, no swap.
// No swaps in the last iteration.
// Iteration 3:

// Compare 4 and 5, no swap.
// Compare 5 and 6, no swap.
// Compare 6 and 7, no swap.
// Compare 7 and 3, swap as 7 > 3. Array becomes {4, 5, 6, 3, 7, 8, 9}
// Compare 7 and 8, no swap.
// Compare 8 and 9, no swap.
// No swaps in the last iteration.
// Iteration 4:

// Compare 4 and 5, no swap.
// Compare 5 and 6, no swap.
// Compare 6 and 3, swap as 6 > 3. Array becomes {4, 5, 3, 6, 7, 8, 9}
// Compare 6 and 7, no swap.
// Compare 7 and 8, no swap.
// Compare 8 and 9, no swap.
// No swaps in the last iteration.
// Iteration 5:

// Compare 4 and 5, no swap.
// Compare 5 and 3, swap as 5 > 3. Array becomes {4, 3, 5, 6, 7, 8, 9}
// Compare 5 and 6, no swap.
// Compare 6 and 7, no swap.
// Compare 7 and 8, no swap.
// Compare 8 and 9, no swap.
// No swaps in the last iteration.
// Iteration 6:

// Compare 4 and 3, swap as 4 > 3. Array becomes {3, 4, 5, 6, 7, 8, 9}
// Compare 4 and 5, no swap.
// Compare 5 and 6, no swap.
// Compare 6 and 7, no swap.
// Compare 7 and 8, no swap.
// Compare 8 and 9, no swap.
// No swaps in the last iteration.
// The final sorted array is {3, 4, 5, 6, 7, 8, 9}.