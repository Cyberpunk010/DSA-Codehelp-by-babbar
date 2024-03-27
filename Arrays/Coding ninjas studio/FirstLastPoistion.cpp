#include <vector>
using namespace std;

// find first and last occurence seperately
int firstOcc(Vector<int>& arr,int n,int key){

    int s = 0; int e = n-1;
    int mid = s + (e-s)/2;

    int ans = -1;

    while(s<=e){

        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }

        else if(key > arr[mid]){
            s = mid + 1;
        }

        else if (key > arr[mid]){
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int lastOcc(vector<int>& arr,int n,int key){

    int s = 0; int e = n-1;
    int mid = s + (e-s)/2;

    int ans = -1;  // If any condition not mainpulate ans then it return -1 automatically

    while(s<=e){

        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }

        else if(key > arr[mid]){
            s = mid + 1;
        }

        else if (key < arr[mid]){
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int,int> p;
    p.first = firstOcc(arr, n, k);
    p.second = lastOcc(arr, n, k);
    
    return p;
}


// Finding the First Occurrence (firstOcc function):

// Initialize s to 0, e to 9, and mid to (0 + (9 - 0) / 2) = 4.
// Check arr[4] which is 3.
// Since key (2) is less than arr[mid], update e to mid - 1 = 3.
// Now, s is 0, e is 3, and mid becomes (0 + (3 - 0) / 2) = 1.
// Check arr[1] which is 2.
// Since arr[mid] equals key, update ans to mid = 1.
// Update e to mid - 1 = 0.
// Now, s is 0, e is 0, and mid becomes (0 + (0 - 0) / 2) = 0.
// Check arr[0] which is 1.
// Since key (2) is greater than arr[mid], update s to mid + 1 = 1.
// Now, s becomes 1, e remains 0, and mid becomes (1 + (0 - 1) / 2) = 0.
// s is not less than or equal to e, so exit the loop.
// Return ans, which is 1.


// Finding the Last Occurrence (lastOcc function):

// Initialize s to 0, e to 9, and mid to (0 + (9 - 0) / 2) = 4.
// Check arr[4] which is 3.
// Since key (2) is less than arr[mid], update e to mid - 1 = 3.
// Now, s is 0, e is 3, and mid becomes (0 + (3 - 0) / 2) = 1.
// Check arr[1] which is 2.
// Since arr[mid] equals key, update ans to mid = 1.
// Update s to mid + 1 = 2.
// Now, s is 2, e remains 3, and mid becomes (2 + (3 - 2) / 2) = 2.
// Check arr[2] which is 2.
// Since arr[mid] equals key, update ans to mid = 2.
// Update s to mid + 1 = 3.
// Now, s is 3, e remains 3, and mid becomes (3 + (3 - 3) / 2) = 3.
// Check arr[3] which is 2.
// Since arr[mid] equals key, update ans to mid = 3.
// Update s to mid + 1 = 4.
// Now, s is 4, e remains 3, and mid becomes (4 + (3 - 4) / 2) = 3.
// s is not less than or equal to e, so exit the loop.
// Return ans, which is 3.


// Main Function (main):

// Call firstAndLastPosition(arr, n, key) with arr, n, and key.
// Get the pair {1, 3}.
// Print the first occurrence of 2 is at index 1.
// Print the last occurrence of 2 is at index 3.