// 7. Reverse Integer

#include <iostream>
using namespace std;

class solution {
public:
    int reverseint(int n) {
        int ans = 0;
        
        while(n != 0){
            int digit = n%10;

            if((ans> INT32_MAX/10) || (ans< INT32_MIN/10)) {
            return 0;
            }
        
        ans = ( ans * 10 ) + digit ;
        n = n/10;
        }
        return ans;
    }
};

int main(){
    int n;
    cin>>n;
    solution obj;
    int answer = obj.reverseint(n);

    cout<<"Reverse numbered is "<<answer<<endl;
    return 0;
}