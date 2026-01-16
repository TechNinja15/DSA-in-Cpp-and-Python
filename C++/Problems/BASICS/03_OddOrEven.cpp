#include<iostream>
using  namespace std;
int main(){
    int a;
    cout<<"Enter a Number to check if it is ODD or EVEN : ";
    cin>>a;
    if (a%2==0){
        cout<<a<<" is a Even Number";
    }
    else{
        cout<<a<<" is a Odd Number";
    }
    return 0;
}