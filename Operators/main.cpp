#include <iostream>

using namespace std;

int main(){
    //Assignment Operators 
    ///USed to assign values to a variable
    // Example int x  = 10;

    int counter {10};
    int result {0};

    // cout << "Counter : "<< counter <<endl;
    // counter = counter + 1 ;
    // cout << "Counter :" << counter << endl;

    // counter++;
    // cout << "Counter " << counter << endl;

    // ++counter;
    // cout << "COunter  "<< counter << endl;

    //Example 2 
    // counter = 10;
    // result = 0;
    
    // result = ++counter;

    // cout << "Counter :" << counter << endl;
    // cout << "Result : "<<result << endl;

    //Example 3
    // counter = 10;
    // result = 0;

    // cout<<"Counter : "<<counter << endl;

    // result = counter ++ ;
    // cout << "Counter : "<< counter << endl;
    // cout << "Result : "<<result << endl;
    // return 0;

    //Example 4
    counter = 10;
    result = 0;

    cout << "Counter :" << counter << endl;
    result = ++counter + 10;
    cout<<"Counter :"<<counter << endl;
    cout << "Result :" << result << endl;
    return 0; 

}