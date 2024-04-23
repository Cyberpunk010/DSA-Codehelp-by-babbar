#include <iostream>
using namespace std;

bool linearsearch(int arr[],int size,int key){
    if(size == 0){
        return false;
    }

    if(arr[0] == key){
        return true;
    }

    else{
        bool remain = linearsearch(arr+1,size-1,key);
        return remain;
    }
}

int main(){
    int arr[5];

    int key;
    cout<<"Enter your key";
    cin>>key;

    cout<<"Enter Array -----";

    for(int i=0; i<5; i++){
        cin>>arr[i];
    }

    if(linearsearch(arr,5,key)){
        cout<<"Key is Found";
    }

    else{
        cout<<"Key is not Found";
    }

    return 0;
}
