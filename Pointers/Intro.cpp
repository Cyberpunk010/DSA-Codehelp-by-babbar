#include <iostream>
using namespace std;

int main(){
    int num = 10;
    int *ptr = &num;

    cout<<"Address of variable num is "<<ptr<<endl;
    cout<<"Value of that address is "<<*ptr<<endl;

    char ch = 'A';
    char *ptr2 = &ch;

    cout<<"Address of variable ch is "<<static_cast<void*>(ptr2)<<endl;
    cout<<"Value of that address is "<<*ptr2<<endl;

    

return 0;
}