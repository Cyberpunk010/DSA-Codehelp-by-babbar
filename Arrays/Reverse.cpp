#include <iostream>
using namespace std;

void printarray(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void reverse(int arr[],int n){
    int start = 0;
    int end = n-1;

    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

}

int main(){
    int arr[6] = {1,4,0,5,-2,15};

    printarray(arr,6);
    reverse(arr,6);

    cout<<endl;
    printarray(arr,6);

    return 0;

}