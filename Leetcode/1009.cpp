// 1099. Complement of base 10 Integer

#include <iostream>
using namespace std;

class solution{
    public:
    int complement(int n){
        int mask = 0;
        int m = n;

        if(n == 0){
            return 1;
        }

        while(m != 0){
            mask = (mask << 1) | 1 ;
            m = m >> 1;
        }

        int ans = (~n) & mask;
        return ans;
    }
};

int main(){
    int n;
    cin>>n;

    solution sol;
    int res = sol.complement(n);
    cout<<res<<endl;

    return 0;
}