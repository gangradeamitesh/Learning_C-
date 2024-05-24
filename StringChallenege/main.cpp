#include <iostream>
#include <string>

using namespace std;

int main(){

    string unformatted_full_name {"StephenHawking"};
    string first_name {};
    string last_name {};
    string formatted_full_name{};

    first_name += unformatted_full_name[0];
    for (size_t i {1} ; i<unformatted_full_name.length();i++){
        if(!isupper(unformatted_full_name[i])){
            first_name = first_name + unformatted_full_name[i];
        }
        else{
            break;
        }
        
    }
    last_name = unformatted_full_name.substr(first_name.length());

    formatted_full_name = first_name + " " + last_name;

    cout<<first_name<<endl;
    cout<<last_name<<endl;
    cout << "Formatted full name  : "<<formatted_full_name<<endl;
}