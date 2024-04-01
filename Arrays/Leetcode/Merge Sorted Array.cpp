// 88. Merge Sorted Array

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0, j = 0, k = 0;
        vector<int> arr(m + n); 

       
        while (i < m && j < n) {
            if (nums1[i] < nums2[j]) {
                arr[k++] = nums1[i++];
            } else {
                arr[k++] = nums2[j++];
            }
        }

        
        while (i < m) {
            arr[k++] = nums1[i++];
        }

       
        while (j < n) {
            arr[k++] = nums2[j++];
        }

        // Copy elements from arr back to nums1
        for (int i = 0; i < m + n; ++i) {
            nums1[i] = arr[i];
        }
    }
};

// Dry Run

// vector<int> nums1 = {1, 2, 3, 0, 0, 0};
// int m = 3;
// vector<int> nums2 = {2, 5, 6};
// int n = 3;
// Initially, nums1 contains m elements ({1, 2, 3}) and nums2 contains n elements ({2, 5, 6}).

// Initialize variables:

// i = 0: Pointer for nums1
// j = 0: Pointer for nums2
// k = 0: Pointer for arr
// Create an empty vector arr with size m + n, which is 6 in this case.

// Merge elements from nums1 and nums2 into arr:

// Compare nums1[i] (1) and nums2[j] (2). Since 1 < 2, arr[k] becomes 1, and i and k are incremented.
// Compare nums1[i] (2) and nums2[j] (2). Since 2 == 2, arr[k] becomes 2, and i and k are incremented.
// Compare nums1[i] (3) and nums2[j] (5). Since 3 < 5, arr[k] becomes 3, and i and k are incremented.
// After this step, arr contains {1, 2, 2, 3, 0, 0}.

// Copy remaining elements from nums1 to arr:

// There are no remaining elements in nums1, so this step is skipped.
// Copy remaining elements from nums2 to arr:

// There are no remaining elements in nums2, so this step is skipped.
// Copy elements from arr back to nums1:

// Iterate over each element in arr and copy it back to nums1.
// After this step, nums1 becomes {1, 2, 2, 3, 0, 0}.

// Now, nums1 contains the merged sorted array as expected: {1, 2, 2, 3, 0, 0}.
