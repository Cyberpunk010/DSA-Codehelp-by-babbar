// 231. Power of Two

#include <iostream>
#include <math.h>
using namespace std;

class solution{
    public:
    int power(int n){
        int res;

        for(int i = 0; i <= 30; i++){
            int res = pow(2,i);

            if(res == n){
                return true;
            }
        }
        return false;
    }
};

int main(){
    int n;
    cin>>n;

    solution sol;
    int power = sol.power(n);

    cout<<power;
    return 0;
}