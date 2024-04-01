// 283. Move Zeroes

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        for(int j=0; j<nums.size(); j++){

            if(nums[j] != 0){
                swap(nums[j],nums[i]);
                i++;
            }
        }
        
    }
};

// Time complexity = O(n)

// Dry Run

// Consider the input vector nums = [0, 1, 0, 3, 12].

// Initialize variables:

// i = 0: Pointer for the first occurrence of 0.
// Start the loop from j = 0.
// Iterate through the vector:

// At j = 0, nums[0] = 0, so it's skipped.
// At j = 1, nums[1] = 1, so no action is taken.
// At j = 2, nums[2] = 0, so it's skipped.
// At j = 3, nums[3] = 3, so it's swapped with nums[i]. Now, nums = [3, 1, 0, 0, 12], and i is incremented to 1.
// At j = 4, nums[4] = 12, so it's swapped with nums[i]. Now, nums = [3, 1, 12, 0, 0], and i is incremented to 2.
// The loop ends as j reaches the end of the vector.

// After this process, all non-zero elements are moved to the beginning of the vector, preserving their original order, and all zeros are moved to the end of the vector.

// Final nums: [3, 1, 12, 0, 0].


