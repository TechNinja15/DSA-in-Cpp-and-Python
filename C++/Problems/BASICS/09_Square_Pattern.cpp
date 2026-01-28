/*
Q1.Example:
    for n = 4
    1234
    1234
    1234
    1234
*/
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

/*
Q2. Example:
    ABCD
    ABCD
    ABCD
    ABCD
*/

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

/*
Q3. for n = 3 Example:
    123
    456
    789
*/

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


/*
Q4. for n = 3 Example:
    ABC
    DEF
    GHI
*/

// #include <iostream>
// using namespace std;
// int main() { 
//     int n;
//     char ch;
//     cout<<"Enter a Number : ";
//     cin>>n;
//     ch ='A';
//     for (int i=1; i<=n; i++){
//         for (int j=1 ; j<=n; j++){
//             cout<<ch;
//             ch=ch+1;
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

'''
Q5. For n = 4 Example : 
    *
    **
    ***
    ****
'''

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<< "Enter a Number : ";
//     cin>>n;

//     for (int i=1; i<=n; i++){
//         cout<<"*"*i<<"\n";
//     }
//     return 0;
// }

'''
Q6. for n = 4 Example:
    1
    22
    333
    4444
'''

// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"Enter a Number : ";
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j = 1; j<=i; j++){
//             cout<<i;
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

'''
Q7. for n = 4 Example:
    A
    BB
    CCC
    DDDD
'''

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a Number : ";
//     cin>>n;
//     char ch = 'A';
//     for(int i=1; i<=n; i++){
//         for(int j=1;  j<=i; j++){
//             cout<<ch;
//         }
//         ch = ch +1;
//     }
//     return 0;
// }


'''
Q8. for n = 4 Example : 
    1
    21
    321
    4321
'''

// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     cout<<"Enter a Number : ";
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=i; j>0; j--){
//             cout<<j;
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

'''
Q9. for  n=3 Example :
    1
    23
    456
'''

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a Number : ";
//     cin>>n;
//     int count  = 1;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<count;
//             count = count + 1;
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

'''
Q10. for  n=4 Example :
    A
    BC
    DEF
    GHIJ
'''

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a Number : ";
//     cin>>n;

//     char ch = 'A';

//     for (int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<ch;
//             ch = ch + 1;
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

'''
Q11 for n=4 Example :
    A
    BA
    CBA
    DCBA
'''

// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"Enter a Number : ";
//     cin>>n;
//     char startChar = 'A';
//     for (int i = 1; i <= n; i++) {
//         for (int j = startChar; j >= 'A'; j--) {
//             cout << (char)j;
//         }
//         cout << "\n";
//         startChar++;
//     }
//     return 0;
// }

