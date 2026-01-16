#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter a Number to check wheater the Number is Prime or Not : ";
    cin>>n;

    for(int i=2; i<n;i++){
        if(n%i==0){
            cout<<"Not a Prime Number";
        }
        else{
            cout<<"Its a Prime Number";
        }
    }

    return 0;
}