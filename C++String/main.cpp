#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){

    string s0;
    string s1 {"Apple"};
    string s2 {"Banana"};
    string s3 {"Kiwi"};
    string s4 {"apple"};
    string s5 {s1};
    string s6 {s1,0,3};
    string s7 (10,'X');

    cout<< s0 << endl;
    cout<< s0.length()<<endl;

    cout << s7<<endl;
    for (int i {0} ; i<s1.length();i++){
        cout<<s1.at(i);

    }
    cout << endl;
    for (char c : s1){
        cout<<c;
    }
    
    cout<<endl;
    return 0;

}