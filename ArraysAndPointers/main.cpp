#include <iostream>

using namespace std;

void swap(int *a , int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){

    // int scores[] {100,95,89};

    // cout << "Value of scores : "<<scores <<endl;

    // int *score_ptr{scores};
    // cout<<"Value of score_ptr : "<<score_ptr <<endl;

    // cout << "\nArray subscript notation ----------------------"<<endl;

    // cout << scores[0] <<endl;
    // cout << scores[1]<<endl;
    // cout << scores[2]<<endl;

    // cout << "\nPointer subscript notation _--------------------"<<endl;

    // cout<<score_ptr[0]<<endl;
    // cout << score_ptr[1]<<endl;
    // cout<<score_ptr[2]<<endl;

    // cout<<"\nPointer offset notation ---------------------------"<<endl;
    // cout<<*score_ptr << endl;
    // cout << *(score_ptr+1)<<endl;
    // cout << *(score_ptr + 2)<<endl;

    // cout<<"\nArray offset notation -------------------------------"<<endl;
    // cout<< *scores<<endl;
    // cout <<*(scores+1) <<endl;
    // cout << *(scores+2)<<endl;

    // cout << endl;

    cout << "Arithmatic in Array Pointers -----------------------"<<endl;

    int scores[] {100,95,89,68,-1};
    int *scores_ptr{scores};

    while (*scores_ptr !=-1){
        cout << *scores_ptr <<endl;
        scores_ptr ++;
    }

    cout << "\n----------------------------"<<endl;
    string s1 {"Frank"};
    string s2 {"Frank"};
    string s3 {"James"};

    string *p1{&s1};
    string *p2{&s2};
    string *p3{&s1};

    cout << boolalpha;
    cout << p1 << "=="<<p2 << ": "<<(p1==p2)<<endl;
    cout << p1 << "=="<<p3 << ": "<<(p1==p3)<<endl;

    cout << *p1 << "=="<<*p2 << (*p1==*p2)<<endl;
    cout << *p1 << "==" <<*p3 << (*p1 == *p3)<<endl;

    p3 = &s3;
    cout << *p1 << "=="<<*p3 << ":"<<(*p1 == *p3)<<endl;




    int x = 5;
    int y = 10;
    cout << "Before Swap : x = "<<x << ", y = "<<y<<endl;

    swap(&x , &y);
    cout<< "After swap : x = "<<x << " , y = "<<y<<endl;


    return 0;
}