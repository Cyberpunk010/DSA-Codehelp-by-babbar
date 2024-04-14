// 1
// 2 3 
// 4 5 6
// 7 8 9 10

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row = 1;
    int num = 1;

    while(row<=n){
      
        int j = 1;
        while(j<=row){
            cout<<num<<" ";
            j = j+1;
            num = num+1;

        }
        cout<<endl;
        row = row+1;
    }
    return 0;
}