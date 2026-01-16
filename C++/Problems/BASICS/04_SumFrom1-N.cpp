#include <iostream>
using namespace std;

int main() {
    int n,sum=0;
    cout<<"Enter a Number :";
    cin>>n;

    for(int count=1; count<=n; count++){
        sum = count + sum;
    }
    cout<<"Sum is : "<<sum;
    return 0;
}