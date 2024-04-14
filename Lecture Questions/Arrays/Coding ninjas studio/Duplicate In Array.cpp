// code ninjas code
int findDuplicate(vector<int> &arr) 
{
    // Write your code here
    // For logic XOR property

    int ans=0;

    // XOR all element
    for(int i=0; i<arr.size();i++){
        ans = arr[i]^ans;
    }

    //XOR [1, n-1]  same 0 to n-1 and 1 to n-1 because 0^ans = ans
    for(int i=0; i<arr.size(); i++){
        ans = ans^i;
    }
	return ans;
} 


// find duplicates in an array
// #include <iostream>
// using namespace std;

// int main(){
//     int arr[6] = {1,2,3,4,5,3};

//     int ans=0;

//     int n = sizeof(arr) / sizeof(arr[0]);
//     // int n = arr.size();
//     cout<<n<<endl;

//     for(int i=0; i<n; i++){
//         ans = ans^arr[i];
//     }

//     for(int i=0; i<(n-1); i++){
//         ans = ans^i;
//     }
//     cout<<ans;
//     return 0;
// }
// Let's suppose we have the vector arr with elements {1, 2, 3, 4, 5, 3}.

// XORing all array elements:

// Initially, ans = 0.
// Iterating through the vector:
// i = 0: ans = 0 ^ 1 = 1.
// i = 1: ans = 1 ^ 2 = 3.
// i = 2: ans = 3 ^ 3 = 0.
// i = 3: ans = 0 ^ 4 = 4.
// i = 4: ans = 4 ^ 5 = 1.
// i = 5: ans = 1 ^ 3 = 2.
// After this loop, ans holds the XOR of all elements in the vector, which is 2.
// XORing [1, n-1]:

// ans is initially 2.
// Iterating from 1 to n-1:   // Not iterate from 0 to n-1 because if 0^ans = ans it keep same
// i = 1: ans = 2 ^ 1 = 3.
// i = 2: ans = 3 ^ 2 = 1.
// i = 3: ans = 1 ^ 3 = 2.
// i = 4: ans = 2 ^ 4 = 6.
// i = 5: ans = 6 ^ 5 = 3.
// After this loop, ans holds the XOR of all numbers from 1 to n-1, which is 3.




