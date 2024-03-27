#include <iostream>
using namespace std;

void printarray(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}


void swaparray(int arr[],int size){
    for(int i=0; i<size; i+=2){

        if ((i+1) < size){
            swap(arr[i],arr[i+1]);
          
        }
    }
}
int main(){
    int arr[6] = {1,2,3,4,5,6};
    //sizeof operator for array
    //Note: sizeof operator return size in byte so take it as int we divide it by first element size
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<size<<endl;


    printarray(arr,size);
    swaparray(arr,size);

    cout<<endl;
    printarray(arr,size);
    
    return 0;
}