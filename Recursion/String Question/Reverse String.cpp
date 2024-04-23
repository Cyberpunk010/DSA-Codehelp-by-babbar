#include <iostream>
using namespace std;

void reverse(string &str,int i,int j){
    if(i>j){
        return;
    }

    swap(str[i],str[j]);
    i++;
    j--;

    reverse(str,i,j);
}

int main(){
    string num = "12345";

    cout << "Original string: " << num << endl;

    reverse(num, 0, 4);

    cout << "Reversed string: " << num << endl;
}