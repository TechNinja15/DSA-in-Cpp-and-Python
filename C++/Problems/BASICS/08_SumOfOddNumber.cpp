#include <iostream>
using namespace std;

int main() {
    
    int n,sum =0;
    cout<<"Enter a Number : ";
    cin>>n;
    
    for(int i=1; i<=n; i++){
        if(i%2!=0){
            cout<<i<<"\n";
            sum = sum+i;
        }
    }
    cout<<"Sum is : "<<sum<<"\n";
    return 0;
}