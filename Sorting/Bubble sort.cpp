#include <iostream>
using namespace std;

void Selectionsort(int arr[] , int n){
    
    for(int i=1; i<n; i++){
        bool swapped = false;

        for(int j=0; j<n-1; j++){
            if(arr[j]<arr[j+1]){
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