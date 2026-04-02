// #include<iostream>
// using namespace std;
// int main() {
//     int marks[] = {99, 100, 18, 7, 45, 10}; // Assigning Elements in Array
//     marks[0]=999;  // Updating a single element of a Array
//     cout<<marks[0]<<endl; // Accessing Elements in Array
//     cout<<marks[1]<<endl; // Accessing Elements in Array
//     cout<<marks[2]<<endl; // Accessing Elements in Array
//     cout<<marks[3]<<endl; // Accessing Elements in Array
//     cout<<marks[4]<<endl; // Accessing Elements in Array
//     cout<<marks[5]<<endl; // Accessing Elements in Array
    
//     // 0 to size -1
//     cout << marks[-1]<< endl;
//     cout << marks[6]<< endl; // both the statements are wrong because the index is out of bound

//     return 0;

// }


//-------------------------------------Loops on Array-------------------------------------

// #include<iostream>
// using namespace std;
// int main() {
//     int marks[] = {99, 100, 18, 7, 45}; // Assigning Elements in Array
    
//     int siz = sizeof(marks); // this will give size of array named marks in bytes
//     int size = siz/ sizeof(int); // this will give size of array named marks in terms of number of elements
//     cout<<"Size of Array is : "<<size<<endl;

//     // For INPUT

//     for(int i=0; i<size; i++){
//         cout<<"Enter elements for Array : ";
//         cin>>marks[i];
//     }

//     for(int i=0; i<size; i++){
//         cout<<marks[i]<<endl;
//     }

//     return 0;

// }

// Q1. Find the smallest and the largest No. in the Array

// Smallest

// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int arr[] = {5,18,7,9,15};
//     int size = sizeof(arr)/sizeof(int);
//     int min = INT_MAX;
//     for (int i=0; i<size; i++){
//         if(arr[i]< min){
//             min= arr[i];
//         }
//     }
//     cout<<"The smallest number is : "<<min<<endl;
// }

// Largest

// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int arr[] = {5,18,7,9,15};
//     int size = sizeof(arr)/sizeof(int);
//     int max = INT_MIN;
//     for (int i=0; i<size; i++){
//         if(arr[i]> max){
//             max= arr[i];
//         }
//     }
//     cout<<"The largest number is : "<<max<<endl;
// }


// ------------------------ Finding smallest and largest using Function----------------------

// max function

// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     int arr[]= {5,18,7,9,15};
//     int size = sizeof(arr)/sizeof(int);
//     int max = *max_element(arr, arr + size);
//     int min = *min_element(arr, arr + size);

//     cout<<"The largest number is : "<<max<<endl;
//     cout<<"The smallest number is : "<<min<<endl;

//     return 0;
// }




//-------------------------------------Pass BY Reference-------------------------------------

// In Pass By Reference when we change the value of array in function it also changes in main function
// While Pass By Value when we change the value of array in function it does not changes in main function

// #include<iostream>
// using namespace std;

// void changearr(int arr[], int size){
//     cout<<"In Function :"<<endl;
//     for(int i=0; i<size; i++){
//         arr[i] =2*arr[i];
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// int main(){
//     int arr[] = {1,2,3};

//     changearr(arr, 3);  // Here we are passing the array by reference
//     cout<<"In main :"<<endl;
//     for(int i=0; i<3; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<< endl;
//     return 0;
// }

 // -------------------------------Linear Search Algo----------------------------------------

 // From the below array we need to find if the target no. exist in the array if YES return the index no. else return -1

//  #include<iostream>
//  using namespace std; 

//  int ls(int arr[],int target,int size){
//     for(int i=0; i<size; i++){
//         if(arr[i]==target){
//             return i;
//         }
//     }
//     return -1;
//  }

//  int main(){
//     int arr[] = {4,2,7,8,1,2,5};
//     int size = sizeof(arr)/sizeof(int);
//     int target;
//     cout<<"Enter a Target Number to Find in the array : ";
//     cin>>target;
//     cout<<ls(arr,target,size)<<endl;

//     return 0;
//  }


//--------------------------------Reverse an Array-------------------------------------------

#include<iostream>
using namespace std;

void reverseArr(int arr[], int size){
    int start = 0, end = size-1;

    while( start <= end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){
    int arr[]={4,2,7,8,1,2,5};
    int size = sizeof(arr)/sizeof(int);
    
    cout<<"Original Array : ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    reverseArr(arr,size);

    cout<<"Reversed Array : ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}