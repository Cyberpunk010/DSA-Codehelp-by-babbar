// Row wise sum and column wise sum

#include <iostream>
using namespace std;

void rowsum(int arr[][4],int n, int m){
   
     for(int row=0; row<n; row++){
         int sum = 0;       // after one row sum again sum is zero for next row
        for(int col=0; col<m; col++){
           sum = sum + arr[row][col];
            }
        cout<<sum<<" ";
        cout<<endl;
        }
      
    }

void columnsum(int arr[][4],int n, int m){
   
     for(int col=0; col<m; col++){
         int sum = 0;       // after one row sum again sum is zero for next row
        for(int row=0; row<n; row++){
           sum = sum + arr[row][col];
            }
        cout<<sum<<" ";
        cout<<endl;
        }
      
    }

void largestrowsum(int arr[][4],int n, int m){
    int max = INT32_MIN;
    int rowIndex = -1;

     for(int row=0; row<n; row++){
         int sum = 0;       // after one row sum again sum is zero for next row
        for(int col=0; col<m; col++){
           sum = sum + arr[row][col];
            }
        
        if(sum > max){
            max = sum;
            rowIndex = row;
            }
        }
        cout<<"Max sum is "<<max<<" and row index is "<<rowIndex;
}


int main(){
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

    rowsum(arr,3,4);
    cout<<endl;
    columnsum(arr,3,4);
    cout<<endl;

    largestrowsum(arr,3,4);

    return 0;
}