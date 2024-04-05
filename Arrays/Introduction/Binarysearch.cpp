#include <iostream>
using namespace std;

int Binary(int arr[],int size,int key){

    int start=0;
    int end = size-1;

    int mid = start + (end-start)/2;
    

    while(start<=end){

        if(arr[mid] == key){
            cout<<"Index is "<<mid<<endl;
            return 1;
        }

        else if(key>arr[mid]){
            start = mid+1;
        }

        else {
            end = mid-1;
        }
        mid = start +(end-start)/2;

    }
    return -1;
}

int main(){
    int even[8] = {2,4,6,8,10,12,14,18};
    int odd[5] = {1,2,5,12,9};

    int size = 8;
    int size1 = 5;
    int key = 12;

    int res = Binary(even,size,key);
    int res1 = Binary(odd,size1,key);
    cout<<res<<endl;
    cout<<res1<<endl;

    return 0;
    
}