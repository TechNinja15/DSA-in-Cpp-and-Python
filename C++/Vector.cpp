// Vector is a Dynamic array That can automatically resize itself when elements are added or removed

//Syntax

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> vec;   // Here we have declared a vector of integers named 
//     vec = {1,2,3};     // Assigning Elements in Vector
//     vec = {4,5,6,7};   // Here also we are assigning the values in vector but this is an update of vec as the previous data is lost
//     vec.push_back(8);  // Adding Elements in Vector at the end

//     int size = vec.size();
//     cout<<"Size of vector is : "<<size<<endl; 
//     cout<<vec[2]<<endl;
    
// // we have one more method to intialize a vector
//     vector<int> vec2(3,0); // This will create a vector of size 3 with all elements initialized to 0
//     cout<<vec2[0]<<endl;
//     cout<<vec2[1]<<endl;
//     cout<<vec2[2]<<endl;

//     return 0;
// }


// TO PRINT ALL THE ELEMENTS IN VECTOR

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec = {1,2,3,4,5};
    
    for(int i : vec){
        cout<<i<<" ";
    }

    cout<<endl;
    
    vector<char> vec2 = {'a','b','c','d','e'};
    for(char i : vec2){
        cout<<i<<" ";
    }
    return 0;
}

// NOTE : To print all elements vector uses loops

