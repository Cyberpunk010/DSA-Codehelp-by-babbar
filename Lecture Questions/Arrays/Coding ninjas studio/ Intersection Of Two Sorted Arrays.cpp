#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	// Write your code here.
	int i = 0; int j = 0;
	vector<int> ans;

	while(i<n && j<m){

		if(arr1[i] == arr2[j]){
			ans.push_back(arr1[i]);
			i++;
			j++;
		}

		else if(arr1[i] > arr2[j]) {
			j++;
		}

		else{
			i++;
		}
		
		}
		return ans;
}

//Dry Run
// arr1: 1 2 3 4 5
// arr2: 3 4 5 6 7
// i = 0, j = 0
// arr1[i] = 1, arr2[j] = 3. Since arr1[i] < arr2[j], increment i.
// i = 1, j = 0
// arr1[i] = 2, arr2[j] = 3. Since arr1[i] < arr2[j], increment i.
// i = 2, j = 0
// arr1[i] = 3, arr2[j] = 3. They are equal, so add 3 to the ans vector and increment both i and j.
// i = 3, j = 1
// arr1[i] = 4, arr2[j] = 4. They are equal, so add 4 to the ans vector and increment both i and j.
// i = 4, j = 2
// arr1[i] = 5, arr2[j] = 5. They are equal, so add 5 to the ans vector and increment both i and j.
// i = 5, j = 3 (arr1 is exhausted, so the loop stops)
// After the loop, the ans vector will contain the elements [3, 4, 5], which are the common elements between arr1 and arr2.

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
}
//     return 0;
// }
