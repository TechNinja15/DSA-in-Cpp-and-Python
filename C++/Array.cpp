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

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]= {5,18,7,9,15};
    int size = sizeof(arr)/sizeof(int);
    int max = *max_element(arr, arr + size);
    int min = *min_element(arr, arr + size);

    cout<<"The largest number is : "<<max<<endl;
    cout<<"The smallest number is : "<<min<<endl;

    return 0;
}