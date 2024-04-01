// 724  Find Pivot Index

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int total_sum = 0;
        int left_sum = 0;
        int right_sum = 0;

       
        for(int i = 0; i < nums.size(); i++){
            total_sum += nums[i];
        }

     
        for(int i = 0; i < nums.size(); i++){
            right_sum = total_sum - left_sum - nums[i];
            if(left_sum == right_sum){
                return i;
            }

           left_sum += nums[i];
        }
        return -1;
    }
};

// Dry Run
// nums = [1, 7, 3, 6, 5, 6]
// We'll go through the code step by step:

// Initialization:

// total_sum = 0
// left_sum = 0
// right_sum = 0
// Total Sum Calculation:

// Iterate through the array and calculate the total sum of all elements: total_sum = 1 + 7 + 3 + 6 + 5 + 6 = 28.
// Iteration:

// Index 0:
// right_sum = total_sum - left_sum - nums[0] = 28 - 0 - 1 = 27. Since left_sum != right_sum, move to the next index.
// Update left_sum = left_sum + nums[0] = 0 + 1 = 1.
// Index 1:
// right_sum = total_sum - left_sum - nums[1] = 28 - 1 - 7 = 20. Since left_sum != right_sum, move to the next index.
// Update left_sum = left_sum + nums[1] = 1 + 7 = 8.
// Index 2:
// right_sum = total_sum - left_sum - nums[2] = 28 - 8 - 3 = 17. Since left_sum != right_sum, move to the next index.
// Update left_sum = left_sum + nums[2] = 8 + 3 = 11.
// Index 3:
// right_sum = total_sum - left_sum - nums[3] = 28 - 11 - 6 = 11. Since left_sum == right_sum, we found the pivot index. Return i = 3.
// Return:

// The pivot index is 3, which corresponds to the value 6 in the array.
// So, in this example, the pivot index is 3, where the sum of elements to the left (1 + 7 + 3 = 11) is equal to the sum of elements to the right (5 + 6 = 11).
