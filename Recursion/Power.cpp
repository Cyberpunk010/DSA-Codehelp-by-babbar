#include <iostream>
using namespace std;

int Power(int n){
    if(n==0)
        return 1;

    return 2*Power(n-1);
}

int main(){
    int n;
    cout<<"Enter the number for power of two : ";
    cin>>n;

    int ans = Power(n);
    cout<<ans<<endl;

    return 0;


}