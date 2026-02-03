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



// #include<iostream>
// using namespace std;

// int factorial(int n){
//     int fact = 1;
//     for(int i=1; i<=n; i++){
//         fact = fact * i;
//     }
//     return fact;
// }

// int main(){
//     int n;
//     cout<<"Enter a value : ";
//     cin>>n;
//     cout<<"Factorial of "<<n<<" is = "<<factorial(n)<<"\n";
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int sum(int a, int b){
//     return a+b;
// }

// int main(){
//     int x=5,y=4;
//     cout<<sum(x,y)<<"\n"; // Pass by value : copy of argument is passed to the function
//     return 0;
// }


// #include<iostream>
// using namespace std;

// void changeX(int x){
//     x = 2*x;
//     cout<<"x="<<x<<"\n";
//     return;
// }

// int main(){
//     int x=5;
//     changeX(x);
//     cout<<"x="<<x<<"\n"; 
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){

//     int n,digsum=0;
//     cout<<"Enter a Number : ";
//     cin>>n;

//     while (n>0){
//         int lastdig = n%10;
//         n = n/10;
//         digsum = digsum + lastdig;
//     }

//     cout<<"Sum of digits = "<<digsum<<"\n";

//     return 0;
// }


// #include<iostream>
// using namespace std;

// int factorial(int n){
//     int fact = 1;
//     for(int i=1; n>=i; i++){
//         fact = fact * i;
//     }
//     return fact;
// }

// int main(){

//     int a,b;
//     cout<<"Enter a value for n : ";
//     cin>>a;
//     cout<<"Enter a value for r : ";
//     cin>>b;

//     int n = factorial(a);
//     int r = factorial(b);
//     int n_r = factorial(a-b);

//     int nCr = n/(r*n_r);

//     cout<<a<<" C "<<b<<" = "<<nCr<<"\n";
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int prime(int n){
//     int count = 0;
//     for(int i=1; n>=i; i++){
//         if(n % i == 0){
//             count = count + 1;
//         }
//     }
// if (count == 2){
//     cout<<("This is a prime Number ");
// }
// else {
//     cout<<"This is not a prime Number";
// }
// }

// int main(){
//     int a;
//     cout<<"Enter a Value : ";
//     cin>>a;
//     prime(a);
// }

#include<iostream>
using namespace std;
int fabonacci(n){
    int a=0,b=1,c;
    if(n == 1){
        return 0;
    }else-if(n == 2){
        return 1;
    }
    else{
        c = a + b;
        a=b
        b=c
        cout<<c;
    }
}
int main(){
    cout<
}