#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a Character : ";
    cin>>ch;

    if (ch >= 'a' && ch <='z'){        // this is using implicit type casting by converting char to int(ASCII value)
        cout<<ch<<" is a Lower Character";
    }else if(ch>='A' && ch <='Z'){     // this is using implicit type casting by converting char to int(ASCII value)
        cout<<ch<<" is a Upper Character";
    }else{
        cout<<ch<<" Is not a character, INVALID! ";
    }

    return 0;

}