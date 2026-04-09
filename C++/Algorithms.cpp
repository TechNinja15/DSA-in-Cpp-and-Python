//-------------------------------Kadane's Algorithm----------------------------------------


// First Let's disscuss about Sub-Array

// Sub-Array is a contiguous part of an array
// Example : arr = {1,2,3,4,5}
// Sub-Array are : {1}, {2}, {3}, {4}, {5}, {1,2}, {2,3}, {3,4}, {4,5}, {1,2,3}, {2,3,4}, {3,4,5}, {1,2,3,4}, {2,3,4,5}, {1,2,3,4,5}

This is Brute Force Method to find the maximum sum of sub-array

#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(int);
    int max = INT_MIN;
    for(int i=0; i<size; i++){
        for(int j=i; j<size; j++){
            int sum = 0;
            for(int k=i; k<=j; k++){
                sum += arr[k];
            }
            if(sum > max){
                max = sum;
            }
        }
    }
    cout<<max<<endl;
    return 0;
}