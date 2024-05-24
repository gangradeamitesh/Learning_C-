//Primitive Type

#include <iostream>

using namespace std;

int main(){
    char middle_initial {'G'};

    cout << "My middle initial is : " << middle_initial << endl;
    cout << "char :" << sizeof(char) << "bytes."<<endl;
    cout << "int : "<< sizeof(int)  << "bytes."<<endl;
    cout << "float "<< sizeof(float) << endl;


    unsigned short int exam_score {55};
    cout << "My exam score was : " << exam_score << endl;
    cout << "Size of exam score " << sizeof(exam_score) << endl;
    


    int countries_represented {65};
    cout << "There were " << countries_represented << " countries represented in my meeting "<< endl;


    return 0;
}