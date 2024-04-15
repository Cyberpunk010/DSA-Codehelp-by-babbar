// n = 3
// 3 3 3 2 2 2 1 1 1
// 3 3 2 2 1 1
// 3 2 1

#include <iostream>
using namespace std;



   #include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = n; i > 0; i--){
        for(int j = n; j > 0; j--){
            for(int k = 0; k < i ; k++){
                cout << j << " ";
            }
        }
        cout << "$";
    }

}