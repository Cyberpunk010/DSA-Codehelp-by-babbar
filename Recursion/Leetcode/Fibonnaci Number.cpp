// 509. Fibonacci Number

// 0 1 1 2 3 5 8 13 21---

int Fibonnaci(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    int ans = Fibonnaci(n-1)+Fibonnaci(n-2);
    return ans;
}



