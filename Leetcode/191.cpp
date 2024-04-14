// 191. Number of 1 Bits

#include <iostream>
#include <string>
using namespace std;


class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while(n!=0){
            if(n&1){     //1&1 = 1 true and enter in if 
                count++;
            }
            n = n>>1;  //Right shift
            
        }
        return count;
    }
};

int main(){
    string binarystr;
    cin>>binarystr;

    // Convert binary string to unsigned integer
    uint32_t n = stoi(binarystr, nullptr, 2);

    Solution sol;
    int result = sol.hammingWeight(n);
    cout<<result;

    return 0;

}