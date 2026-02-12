#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<string> names;
    names.push_back("abc");
    names.push_back("abc0");
    names.push_back("abc1");
    names.push_back("abc2");

    int cnt=0;
    for(string str: names){
        bool endsDigit=(str.back()>='0'&& str.back()<='9');
        cnt+=endsDigit;
    }
    cout<<cnt<<endl;
}