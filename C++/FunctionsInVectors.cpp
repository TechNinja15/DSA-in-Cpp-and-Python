// Functions in vector are used to perform operations on vectors
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
// // 1. vector_name.size() : This returns the size of the Vector

// vector<int> vec = {1,2,3,4,5};
// cout<<vec.size()<<endl;

// // 2. vector_name.push_back(value) : This adds the value at the end of the Vector

// vec.push_back(6); // Now Elements in vec are {1,2,3,4,5,6}
// vec.push_back(7); // Now Elements in vec are {1,2,3,4,5,6,7}

// // 3. vector_name.pop_back() : This removes the last element of the Vector

// vec.pop_back(); // Now Elements in vec are {1,2,3,4,5,6}
// vec.pop_back(2); // This will remove the element at index 2
// // Now the elements in vec are {1,2,4,5,6} 

// // 4. vector_name.front() : This returns the first element of the Vector

// cout<<vec.front()<<endl; // This will return 1

// // 5. vector_name.back() : This returns the last element of the Vector

// cout<<vec.back()<<endl; // This will return 6

// // 6. vector_name.at(index) : This returns the element at the given index

// cout<<vec.at(2)<<endl; // This will return 4

// // 7. vector_name.insert(index, value) : This inserts the value at the given index

// vec.insert(2, 10); // Now the elements in vec are {1,2,10,4,5,6}

// // 8. vector_name.erase(index) : This removes the element at the given index

// vec.erase(2); // Now the elements in vec are {1,2,4,5,6} if we print this will return the output as 10

// // 9. vector_name.clear() : This removes all the elements of the Vector

// vec.clear(); // Now the elements in vec are {}

// // 10. vector_name.empty() : This returns true if the Vector is empty else returns false

// cout<<vec.empty()<<endl; // This will return true

// // 11. vector_name.capacity() : This returns the capacity of the Vector

// cout<<vec.capacity()<<endl; // This will return the capacity of the Vector

// // 12. swap(vector_name1, vector_name2) : This swaps the elements of the two Vectors

// vector<int> vec1 = {1,2,3,4,5};
// vector<int> vec2 = {6,7,8,9,10};

// swap(vec1, vec2); // Now the elements in vec1 are {6,7,8,9,10} and in vec2 are {1,2,3,4,5}

// //13. vector_name.resize(size) : This resizes the Vector to the given size

// vec.resize(10); // Now the elements in vec are {1,2,3,4,5,0,0,0,0,0}

// return 0;

// }



// Array are executed in compile time so they are static
// Vector are executed in run time so they are dynamic

// stactic is faster than dynamic

// Array size is fixed
// Vector size is dynamic

// Array is stored in stack
// Vector is stored in heap


// Array are faster than vector
// Vector are slower than array


// Array are used when we know the size of the array
// Vector are used when we don't know the size of the array


// Vector has 2 properties : 
// 1. Size
// 2. Capacity

// Size is the number of elements in the vector
// Capacity is the number of elements the vector can hold
#include<iostream>
#include<vector>
using namespace std;
int main(){
vector <int> vec;
vec.push_back(1); // Size = 1, Capacity = 1
vec.push_back(2); // Size = 2, Capacity = 2
vec.push_back(3); // Size = 3, Capacity = 4
vec.push_back(4); // Size = 4, Capacity = 4
vec.push_back(5); // Size = 5, Capacity = 8

int size = vec.size();
int capacity = vec.capacity();

cout<<"Size of vector is : "<<size<<endl;
cout<<"Capacity of vector is : "<<capacity<<endl;

}   
// NOTE : Every Time When we push_back() in vector and if the vector is full then it will double its capacity
