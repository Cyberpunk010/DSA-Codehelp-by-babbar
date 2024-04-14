#include <iostream>
using namespace std;

bool ispresent(int arr[][4],int target,int m, int n){
    for(int row=0; row<m; row++){
        for(int col=0; col<n; col++){
            if(arr[row][col] == target){
                return 1;
            }
        }
    }
    return 0;
}

int main(){

    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int target;

    cout<<"Enter the target for search ";
    cin>>target;

    if(ispresent(arr,target,3,4)){
        cout<<"Target found";
    }

    else{
        cout<<"Not found !!";
    }

    return 0;

}