#include <iostream>
using namespace std;

int main(){
    
    int a = 0, b = 0  , c  = 0;

    cout << "Enter the interger a :"<<endl;
    cin>>a;

    cout << "Enter the interger b : "<<endl;
    cin>>b;

    cout << "Enter the interger c : "<<endl;
    cin>>c;

    int s = a + b + c;
    cout << "Sum of the intergers : "<<s<<endl;

    double avg = static_cast<double>(s) / 3;
    
    cout << "Avg of the integers : "<<avg<<endl;

    return 0;

}