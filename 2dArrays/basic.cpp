#include <iostream>
using namespace std;

int main(){

    int arr[3][3];

    cout<<"Enter the elements"<<endl;

    //Taking Input
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Printing the element"<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;

}