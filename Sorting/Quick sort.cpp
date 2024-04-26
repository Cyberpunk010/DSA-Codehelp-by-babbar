#include <iostream>
using namespace std;

int parition(int arr[], int s, int e){
    int pivot = arr[s];

    int cnt = 0;
    for(int i = s+1; i<=e; i++) {
        if(arr[i] <=pivot) {
            cnt++;
        }
    }

    //place pivot at right position
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex], arr[s]);

    //left and right wala part smbhal lete h 
    int i = s, j = e;

    while(i < pivotIndex && j > pivotIndex) {

        while(arr[i] <= pivot) 
        {
            i++;
        }

        while(arr[j] > pivot) {
            j--;
        }

        if(i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }

    }

    return pivotIndex;
}

void quicksort(int arr[], int s, int e){
    if(s>=e){
        return;
    }

    int p = parition(arr,s,e);

    quicksort(arr,s,p-1);
    quicksort(arr,p+1,e);


}

int main(){

    int arr[7] = {4,5,8,7,9,1,0};
    int n = 7;

    quicksort(arr,0,n-1);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}