#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> int_vec = {1,2,3,4,5};

    // vector<int> vec2{6,7,8,9,10};

    // vector<int> vec3(5,12);

    // cout<< "int_vec "<<endl;

    // for (const int& i : int_vec){
    //     cout<< i << " "<<endl;
    // }

    // cout << "Normal For Loop :" << endl;
    // for (int i = 0 ; i<int_vec.size();i++){
    //     cout<< int_vec[i]<<endl;
    // }

    cout << "Initial Vector : "<<endl;
    for(const int&i : int_vec){
        cout << i << " ";
    }
    // add the intergers 6 and 7 to vector
    int_vec.push_back(6);
    int_vec.push_back(7);

    cout<< "\nUpdated Vector : ";
    for(const int& i : int_vec){
        cout << i << " ";

    }
        //Access the elements 
    cout << "\nElement at index 0 : "<< int_vec.at(0) <<endl;
    cout << "element at index 2 : "<<int_vec.at(2)<<endl;

    //Delete element from the last (Pop from the last in python)
    int_vec.pop_back();

    cout << "\nUpdated Vector : ";
    for ( int i : int_vec){
        cout << i << " ";
     }

    return 0;

}