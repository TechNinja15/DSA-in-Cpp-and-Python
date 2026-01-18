'''
Q1.Example:
    for n = 4
    1234
    1234
    1234
    1234
'''
// #include <iostream>
// using namespace std;
// int main() {
    
//     int n;
//     cout<<"Enter a Number : ";
//     cin>>n;
    
//     for (int i=1; i<=n; i++){
//         for (int j=1; j<=n; j++){
//             cout<<j;
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

'''
Q2. Example:
    ABCD
    ABCD
    ABCD
    ABCD
'''

// #include <iostream>
// using namespace std;
// int main() {
    
//     int n;
//     cout<<"Enter a Number : ";
//     cin>>n;
    
//     for (int i=1; i<=n; i++){
//         char ch='A';
//         for (int j=1; j<=n; j++){
//             cout<<ch;
//             ch = ch+1;
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

'''
Q3. for n = 3 Example:
    123
    456
    789
'''

// #include <iostream>
// using namespace std;
// int main() { 
//     int n,num;
//     cout<<"Enter a Number : ";
//     cin>>n;
//     num=1;
//     for (int i=1; i<=n; i++){
//         for (int j=1 ; j<=n; j++){
//             cout<<num;
//             num++;
//         }
//         cout<<"\n";
//     }
//     return 0;
// }


'''
Q4. for n = 3 Example:
    ABC
    DEF
    GHI
'''

#include <iostream>
using namespace std;
int main() { 
    int n,ch;
    cout<<"Enter a Number : ";
    cin>>n;
    ch ='A';
    for (int i=1; i<=n; i++){
        for (int j=1 ; j<=n; j++){
            cout<<ch;
            ch=ch+1;
        }
        cout<<"\n";
    }
    return 0;
}