#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s) {
    vector<vector<int>> ans;

    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[i] + arr[j] == s) {
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j])); // corrected this line
                temp.push_back(max(arr[i], arr[j])); // corrected this line
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}

Consider the array: [3, 5, 2, 4, 6, 1]
And let the target sum s = 7.

// Here's how the code will execute:

// Initialize an empty vector of vectors ans to store pairs whose sum equals s.
// Start the outer loop from the first element of the array.
// i = 0, arr[i] = 3
// Start the inner loop from the next element after i.
// j = 1, arr[j] = 5
// Check if arr[i] + arr[j] = 3 + 5 = 8 is equal to s (which is 7). It's not, so move on.
// Continue inner loop.
// j = 2, arr[j] = 2
// Check if arr[i] + arr[j] = 3 + 2 = 5 is equal to s. It's not, so move on.
// Continue inner loop.
// j = 3, arr[j] = 4
// Check if arr[i] + arr[j] = 3 + 4 = 7 is equal to s. It is equal, so we push the pair [3, 4] into ans.
// Continue inner loop.
// j = 4, arr[j] = 6
// Check if arr[i] + arr[j] = 3 + 6 = 9 is equal to s. It's not, so move on.
// Continue inner loop.
// j = 5, arr[j] = 1
// Check if arr[i] + arr[j] = 3 + 1 = 4 is equal to s. It's not, so move on.
// End of inner loop.
// Continue outer loop.
// i = 1, arr[i] = 5
// Continue inner loop from j = 2.
// Similar steps as above.
// Continue outer loop until all elements are covered.
// Sort ans in ascending order.
// Return ans.
// After the execution, ans will contain the pairs [1, 6] and [3, 4] since they sum up to 7.
