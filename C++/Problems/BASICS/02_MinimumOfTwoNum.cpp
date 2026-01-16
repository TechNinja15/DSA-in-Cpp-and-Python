#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter Second Number";
    cin>>b;
    if(a<b){
        cout<<a<<" Is the Minimum Number";
    }
    else{
        cout<<b<<" Is the Minimum Number";
    }
    return 0;
}