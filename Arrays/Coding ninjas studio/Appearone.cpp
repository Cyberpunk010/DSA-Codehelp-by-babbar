// In an array find the number which is unique occur in an array

#include <iostream>
using namespace std;

int uniquearray(int arr[],int size){
    int ans=0;
    for(int i=0; i<size; i++){
        ans = ans^arr[i];
    }
    return ans;
}

int main(){
    int arr[9] = {1,2,3,4,7,4,3,2,1};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout<<size<<endl;
    
    int res = uniquearray(arr,size);
    cout<<res<<endl;
  
    return 0;
}