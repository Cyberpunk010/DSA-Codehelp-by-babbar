#include <iostream>
using namespace std;

int main(){
    int arr[10];

    for(int i=0; i<10; i++){
        cin>>arr[i];
    }

    for(int i=0; i<10; i++){
        cout<<arr[i];
    }

        cout<<endl;

    int num = 0;
    int sum = 0;
    for(int i=0; i<10; i++){
        num = arr[i];
        sum = num +  sum;
    }

    cout<<sum<<endl;

    return 0;
}