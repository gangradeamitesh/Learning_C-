#include <iostream>
using namespace std;

int main(){

    int room_width{0};
    int room_lenght{0};

    cout << "Enter the width of the room : ";
    cin>>room_width;

    cout<<"Enter the lenght of the room : ";
    cin>>room_lenght;

    cout << "The area of the room is : "<< room_lenght *room_width << "sq feet"<<endl;

    return 0;
}