//852  Peak Index in a Mountain Array

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start = 0;
        int end = arr.size() - 1;

       int mid = start + (end-start)/2;

        while(start<end){
            if(arr[mid] < arr[mid+1] ){
                start = mid+1;
            }

            else{
                end = mid;
            }
        mid = start + (end-start)/2;
        }
   
       return start; 
    }    
};

// Dry Run
// Let's execute this code with a sample input {1, 3, 5, 9, 12, 9, 7, 3}:

// Initially, start = 0, end = 7, mid = 3.
// arr[3] = 9, arr[4] = 12, since arr[mid] < arr[mid + 1], we update start = mid + 1, so start = 4.
// We recalculate mid = 4 + (7 - 4) / 2 = 5.
// arr[5] = 9, arr[6] = 7, since arr[mid] > arr[mid + 1], we update end = mid, so end = 5.
// We recalculate mid = 4 + (5 - 4) / 2 = 4.
// start = end, the loop exits.
// We return start = 4.
// So, the peak index of the mountain array {1, 3, 5, 9, 12, 9, 7, 3} is 4, which corresponds to the value 12.
