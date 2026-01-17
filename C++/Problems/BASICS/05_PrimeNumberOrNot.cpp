#include<iostream>
using namespace std;
int main(){
    int n,count;
    cout<<"Enter a number to check it is prime or not : ";
    cin>>n;
    count = 0;
    for (int i=1; i<=n ;i++){
        if(n % i == 0){
            count = count + 1;
        }
    }
if(count == 2){
    cout<<"This is a Prime Number";
}
else{
    cout<<"This is not a Prime Number";
}

return 0;
}