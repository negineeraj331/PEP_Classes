// passing by value
// #include <iostream>
// using namespace std;

// int add(int a, int b) {
//     a=a*10;
//     b=b*10;
//     int sum=a+b;
//     cout<<a<<' '<<b<<endl;
//     return sum;
// }

// int main(){
//     cout<<"Hello World";
//     int x=6,y=7;
//     add(x,y);
//     cout<<x<<' '<<y<<endl;
//     return 0;
// }


//passing by reference
#include <iostream>
using namespace std;
 void add (string &a, string &b) {
    a.push_back('x');
    b.push_back('x');

    cout<<a<<" "<<b<<endl;
 }

 int main(){
    string a="str 1";
    string b="str 2";

    add(a,b);
    cout<<a<<' '<<b<<endl;
    return 0;
 }