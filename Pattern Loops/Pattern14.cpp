// A B C 
// B C D 
// C D E 

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row = 1;
    while(row<=n){
        int j = 1;
        int col = row;
        while(j<=n){
            char ch = 'A'+col-1;
            cout<<ch<<" ";
            col = col+1;
            j = j+1;
        }
        cout<<endl;
        row = row+1;
    }
}