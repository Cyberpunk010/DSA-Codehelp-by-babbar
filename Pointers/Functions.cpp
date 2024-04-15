#include <iostream>
using namespace std;

//Pass by Value
void number(int n){
    int num = n + 10;
    cout<<"Inside functions "<<num<<endl;
   
}

// Pass by Reference 
void Update(int *ptr){
    *ptr = *ptr + 10;
}

int main(){
    int n = 5;

    cout<<n<<endl;
    number(n);
    cout<<n<<endl;

    int *ptr = &n;
    Update(ptr);
    cout<<n<<endl;
    cout<<*ptr<<endl;



}