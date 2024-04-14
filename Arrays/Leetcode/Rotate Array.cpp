// 189  Rotate Array

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>temp(nums.size());

        for(int i=0; i<nums.size(); i++){
            temp[(i+k)%nums.size()] = nums[i];     //  After modulus answer is in range o to n
        }
        nums = temp;
        
    }
};


//Dry Run

// Let's dry run the rotate function with the input nums = [1, 2, 3, 4, 5] and k = 2.

// Initialize temp vector: temp = [0, 0, 0, 0, 0].

// Loop through each element in nums:

// a. For nums[0] = 1, calculate the new index as (0 + 2) % 5 = 2. So, temp[2] = 1.

// b. For nums[1] = 2, calculate the new index as (1 + 2) % 5 = 3. So, temp[3] = 2.

// c. For nums[2] = 3, calculate the new index as (2 + 2) % 5 = 4. So, temp[4] = 3.

// d. For nums[3] = 4, calculate the new index as (3 + 2) % 5 = 0. So, temp[0] = 4.

// e. For nums[4] = 5, calculate the new index as (4 + 2) % 5 = 1. So, temp[1] = 5.

// After the loop, temp = [4, 5, 1, 2, 3].

// Assign temp back to nums, so nums = [4, 5, 1, 2, 3].

// Now, the nums vector has been rotated to the right by k = 2 positions, resulting in [4, 5, 1, 2, 3].
