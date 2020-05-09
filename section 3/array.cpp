#include <iostream>
using namespace std;

int main(){
    int integer_array[4] = {1,2,3,4};
    cout << integer_array[0] << endl;
    cout << integer_array[1] << endl;
    cout << integer_array[2] << endl;
    cout << integer_array[3] << endl;

    cout << integer_array << endl; // this will print the memory location from where the array is starting

    int another_array[4];

    for (int i = 0; i < 4; i++){
        another_array[i] = integer_array[3-i];
    }

    cout << another_array << endl;

    cout << another_array[0] << endl;
    cout << another_array[1] << endl;
    cout << another_array[2] << endl;
    cout << another_array[3] << endl;

    *another_array = 30; // this line will update only the first element of the array
    cout << another_array[0] << endl;
    cout << another_array[1] << endl;
    cout << another_array[2] << endl;
    cout << another_array[3] << endl;


    int *ap = another_array;
    ap++;   // this line will make the pointer to point to the next element of the array
    *ap = 209;  // this will update the value of 2nd element of the array.
    cout << another_array[1] << endl;



    return 0;
}