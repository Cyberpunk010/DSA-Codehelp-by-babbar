int findUnique(int *arr, int size)
{
    // XOR operator ka use

    int ans = 0;
    for(int i=0; i<size; i++){
        ans = arr[i]^ans;
    }
    return ans;
}

//Dry run
// arr = {2, 3, 4, 5, 4, 3, 2}
// Start iterating through the array:
// For i = 0: ans = arr[0] ^ ans = 2 ^ 0 = 2.
// For i = 1: ans = arr[1] ^ ans = 3 ^ 2 = 1.
// For i = 2: ans = arr[2] ^ ans = 4 ^ 1 = 5.
// For i = 3: ans = arr[3] ^ ans = 5 ^ 5 = 0.
// For i = 4: ans = arr[4] ^ ans = 4 ^ 0 = 4.
// For i = 5: ans = arr[5] ^ ans = 3 ^ 4 = 7.
// For i = 6: ans = arr[6] ^ ans = 2 ^ 7 = 5.
// Return the final value of ans, which is 5.

//because when a^a = 0 and then 0^X = X
