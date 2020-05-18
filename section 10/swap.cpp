#include <iostream>
using namespace std;

void swap(int *a, int *b);

int main(){

    int a,b;
    cout << "Enter a number (a = ) ";
    cin >> a;
    cout << "Enter another number (b = ) ";
    cin >> b;

    swap(&a, &b);

    cout << "After Swapping...." << endl << "a = " << a << endl << "b = " << b << endl;

    return 0;
}

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}