#include <iostream>
#include <string>
#include <vector>

using namespace std;

//Function Prototype
void pass_by_value1(int &num);
void pass_by_value2(string s);
void pass_by_value3(vector<string> v);
void print_vector(vector<string> v);

void pass_by_value1(int &num){
    num = 100;
}

void pass_by_value2(string s){
    s = "Changed";

}

void pass_by_value3(vector<string> v){
    v.clear();
}

void print_vector(vector<string> v){
    for (auto s : v){
        cout<<s << " ";
    }
    cout<<endl;
}

int main(){

    int num {10};
    int another_num{20};
    

    cout << "Num before calling pass_by_value1 : "<<num<<endl;
    pass_by_value1(num);
    cout<<"Num after calling pass_by_value1 : "<<num <<endl;
}