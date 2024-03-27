// 1
// 2 3
// 3 4 5
// 4 5 6 7

#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;    

    int row = 1;
    while(row<=n){
        int col = row;  //Without using this int value Homework
        int j = 1;
        while(j<=row){
            cout<<col<<" ";
            col = col+1;
            j = j+1;
        }
        cout<<endl;
        row  = row+1;
    }
    return 0;
}