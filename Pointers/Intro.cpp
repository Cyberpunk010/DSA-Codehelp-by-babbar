#include <iostream>
using namespace std;

int main(){
    int num = 500;
    int *ptr = &num;

    int **pptr = &ptr;

    cout<<ptr<<endl;
    cout<<pptr<<endl;

    return 0;
}