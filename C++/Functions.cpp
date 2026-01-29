// #include<iostream>
// using namespace std;
// void printhello(){  // function defination
//     cout<<"Hello\n";
// }
// int main(){
//     printhello();  // function call
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int printhello(){  // int is used to return a integer value if there would be an integer value to return
//     cout<<"Hello\n";
//     return 3;
// }
// int main(){
//     int val = printhello();  // function call
//     cout<<"val = "<<val<<"\n"; // val = 3
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int sum(int a, int b){ // if want the values in float we will replace int with float/ double
//     int s = a+b;
//     return s;
// }
// int main(){
    
//     cout<<sum(5,6);

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int min(int a, int b){ //int a, int b are known as parameters
//     if(a>b){
//         cout<<b<<" is the smallest number\n";
//     }else{
//         cout<<a<<" is the smallest number\n";
//     }
// }

// int main(){
//     min(8,9); //8,9 are known as arguments
//     return 0;
// }

// parameters are the copy of the arguments where as arguments are the actual values


// #include<iostream>
// using namespace std;

// int sum1toN(int n){
//     int sum = 0;
//     for(int i=0; i<=n; i++){
//         sum = sum + i;
//     }
//     return sum;
// }

// int main(){
//     int n;
//     cout<<"Enter a value : ";
//     cin>>n;
//     cout<<"sum = "<<sum1toN(n)<<"\n";
//     return 0;
// }



#include<iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact = fact * i;
    }
    return fact;
}

int main(){
    int n;
    cout<<"Enter a value : ";
    cin>>n;
    cout<<"Factorial of "<<n<<" is = "<<factorial(n)<<"\n";
    return 0;
}