// 1752 Check if Array Is Sorted and Rotated

class Solution {
public:
    bool check(vector<int>& nums) {
        int count=0;
        int n=nums.size();

        for(int i=1; i<n; i++){
            if(nums[i-1] > nums[i]){
                count++;
            }
        }
        
        if(nums[n-1]>nums[0]){
            count++;
        }

        return count <= 1;
    }
};

// Dry Run

// Let's dry run the check function with an example to understand its logic.

// Suppose we have the input vector nums = [4, 2, 3].

// Initialize count to 0 and n to the size of nums, which is 3.

// Iterate through each element in nums, starting from index 1:

// a. For nums[1] = 2 and nums[0] = 4, since nums[0] is greater than nums[1], increment count to 1.

// b. For nums[2] = 3 and nums[1] = 2, since nums[1] is greater than nums[2], increment count to 2.

// Check if the last element nums[n-1] > nums[0], which means if the last element is greater than the first element. In our case, nums[2] = 3 > nums[0] = 4. Since this condition is false, do not increment count.

// Finally, return whether count is less than or equal to 1. In our case, count = 2, which is not less than or equal to 1. So, the function returns false.

// Thus, for the input [4, 2, 3], the function returns false.
