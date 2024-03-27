// find duplicates in an array
#include <iostream>
using namespace std;

int main(){
    int arr[6] = {1,2,3,4,5,3};

    int ans=0;

    int n = sizeof(arr) / sizeof(arr[0]);
    // int n = arr.size();
    cout<<n<<endl;

    for(int i=0; i<n; i++){
        ans = ans^arr[i];
    }

    for(int i=0; i<(n-1); i++){
        ans = ans^i;
    }
    cout<<ans;
    return 0;
}