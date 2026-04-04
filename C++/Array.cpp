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

// #include<iostream>
// using namespace std;

// void reverseArr(int arr[], int size){
//     int start = 0, end = size-1;

//     while( start <= end){
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }

// int main(){
//     int arr[]={4,2,7,8,1,2,5};
//     int size = sizeof(arr)/sizeof(int);
    
//     cout<<"Original Array : ";
//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     reverseArr(arr,size);

//     cout<<"Reversed Array : ";
//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     return 0;
// }



// Q1. WAF to sum and product all the elements of an Array

// #include<iostream>
// using namespace std;

// void sumAndProduct(int arr[], int size){
//     int sum = 0;
//     int product = 1;

//     for(int i=0; i<size; i++){
//         sum = sum + arr[i];
//         product = product * arr[i];
//     }
//     cout<<"Sum = "<< sum <<" and Product = "<< product<<endl;
// }

// int main(){
//     int arr[]= {4,2,7,8,1,2,5};
//     int size = sizeof(arr)/sizeof(int);
//     sumAndProduct(arr, size);

//     return 0;
// }



//Q2. WAF to swap min and max number of an Array

// #include<iostream>
// #include<algorithm>
// using namespace std;

// void swapMinMax(int arr[], int size){
//     if(size<=1) return;

//     int minIdx = 0;
//     int maxIdx = 0;

//     for(int i=0; i<size; i++){
//         if(arr[i]<arr[minIdx]){   // This checks arr[0] (4) is smaller than arr[minIdx] (4)
//             minIdx = i;           // And than if the condition gets true it stores i's value in minIdx
//         }

//         if(arr[i]>arr[maxIdx]){
//             maxIdx = i;
//         }
//     }

    // Now we will Swap the min and max by creaing a temp variable

//     int temp = arr[minIdx];
//     arr[minIdx] = arr[maxIdx];
//     arr[maxIdx] = temp;

// }

// int main(){
//     int arr[]={4,2,7,8,1,2,5};
//     int size = sizeof(arr)/sizeof(int);
//     swapMinMax(arr, size);

//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<"\n";
//     return 0;
// }

//Q3. WAF to print all unique numbers in an array

// #include<iostream>
// using namespace std;

// void unique(int arr[], int size){
//     for(int i=0; i<size; i++){
//         int count = 0;
//         for(int j=0; j<size; j++){
//             if(arr[i]==arr[j]){
//                 count++;
//             }
//         }
//         if(count == 1){
//             cout<< arr[i]<<" ";
//         }
//     }
// }

// int main(){
//     int arr[]= {1,2,3,1,2,3,4};
//     int size = sizeof(arr)/sizeof(int);
//     cout<<"Unique Elements : ";
//     unique(arr, size);
//     cout<<"\n"; 
//     return 0;
// }


// Q4. WAF to intersect 2 array and print common elements

// #include<iostream>
// using namespace std;

// void intersect(int arr1[], int size1, int arr2[], int size2){
//     cout<<"The Common Elements are : ";
//     for(int i=0; i<size1; i++){
//         for(int j=0; j<size2; j++){
//             if(arr1[i]==arr2[j]){
//                 cout<<arr1[i]<<" ";
//             }
//         }
//     }
// }

// int main(){
//     int arr1[]={1,2,3,4,5};
//     int arr2[] = {2,4,6,8,10};
//     int size1 = sizeof(arr1)/sizeof(int);
//     int size2 = sizeof(arr2)/sizeof(int);

//     intersect(arr1, size1, arr2, size2);
//     cout<<"\n";
//     return 0;
// }
