int floorSqrt(int n)
{
     int s = 0;
        int e = n;
        long long int mid = s + (e-s)/2;
        
        long long int ans = -1;
        while(s<=e) {
            
            long long int square = mid*mid;
            
            if(square == n)
                return mid;
            
            if(square < n ){
                ans = mid;
                s = mid+1;
            }
            else
            {
                e = mid - 1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
}

// // Dry Run
// Suppose we want to find the floor square root of n = 17.

// Initialization:

// s = 0
// e = n = 17
// mid = 0 + (17-0)/2 = 8
// ans = -1
// Loop Iteration 1:

// square = 8 * 8 = 64
// square > n, so update e = mid - 1 = 8 - 1 = 7
// mid = 0 + (7-0)/2 = 3
// Loop Iteration 2:

// square = 3 * 3 = 9
// square < n, so update ans = mid = 3
// Update s = mid + 1 = 3 + 1 = 4
// mid = 4 + (7-4)/2 = 5
// Loop Iteration 3:

// square = 5 * 5 = 25
// square > n, so update e = mid - 1 = 5 - 1 = 4
// mid = 4 + (4-4)/2 = 4
// Loop Iteration 4:

// square = 4 * 4 = 16
// square < n, so update ans = mid = 4
// Update s = mid + 1 = 4 + 1 = 5
// mid = 5 + (4-5)/2 = 4
// Loop Termination:

// Now, s > e, so the loop terminates.
// Return ans = 4.
// The floor square root of 17 is 4, as 4 * 4 = 16, which is the largest perfect square less than or equal to 17. Therefore, the function returns 4.

// More precision by love babbar
// #include<iostream>
// using namespace std;

//  long long int sqrtInteger(int n) {
        
//         int s = 0;
//         int e = n;
//         long long int mid = s + (e-s)/2;
        
//         long long int ans = -1;
//         while(s<=e) {
            
//             long long int square = mid*mid;
            
//             if(square == n)
//                 return mid;
            
//             if(square < n ){
//                 ans = mid;
//                 s = mid+1;
//             }
//             else
//             {
//                 e = mid - 1;
//             }
//             mid = s + (e-s)/2;
//         }
//         return ans;
//     }

// double morePrecision(int n, int precision, int tempSol) {
    
//     double factor = 1;
//     double ans = tempSol;

//     for(int i=0; i<precision; i++) {
//         factor = factor/10;

//         for(double j=ans; j*j<n; j= j+factor ){
//             ans = j;
//         }
//     }
//     return ans;
// }

// int main() {
//     int n;
//     cout <<" Enter the number " << endl;
//     cin >> n;

//     int tempSol = sqrtInteger(n);
//     cout <<" Answer is " << morePrecision(n, 3, tempSol) << endl;

//     return 0;
// }
