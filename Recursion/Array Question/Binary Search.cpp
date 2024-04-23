#include <iostream>
using namespace std;

bool binarysearch(int arr[],int s,int e,int key){
    if(s>e){
        return false;
    }

    int mid = s + (e-s)/2;

    if(arr[mid] == key){
        return true;
    }


    if(arr[mid]<key){
        return binarysearch(arr,mid+1,e,key);
    }

    else{
        return binarysearch(arr,s,mid-1,key);
    }
}

int main(){
    int arr[5];

    int key;
    cout<<"Enter your key";
    cin>>key;

    cout<<"Enter Array ----- ";

    for(int i=0; i<5; i++){
        cin>>arr[i];
    }

    
    if(binarysearch(arr,0,4,key)){
        cout<<"Key is Found";
    }

    else{
        cout<<"Key is not Found";
    }
  
    return 0;
}
