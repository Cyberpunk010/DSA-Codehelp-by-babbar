
// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     // Initialize arrays
//     int arr1[] = {1, 2, 3};
//     int arr2[] = {3, 4};

//     // Calculate sizes of arrays
//     int n = sizeof(arr1) / sizeof(arr1[0]);
//     int m = sizeof(arr2) / sizeof(arr2[0]);

//     // Initialize variables for two pointers
//     int i = 0;
//     int j = 0;

//     // Initialize a vector to store the intersection
//     vector<int> ans;

//     // Loop until either of the pointers reaches the end of its respective array
//     while (i < n && j < m) {
//         if (arr1[i] == arr2[j]) {
//             ans.push_back(arr1[i]);
//             i++; 
//             j++;
//         } else if (arr1[i] < arr2[j]) {
//             i++;
//         } else {
//             j++;
//         }
//     }

//     // Output the intersection
//     cout << "Intersection: ";
//     for (int k = 0; k < ans.size(); k++) {
//         cout << ans[k] << " ";
//     }
//     cout << endl;

//     return 0;
// }
