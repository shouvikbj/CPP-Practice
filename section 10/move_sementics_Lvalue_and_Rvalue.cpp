#include <iostream>
using namespace std;

void swap(int *a, int *b);

string printMe(){
    return "Shouvik";
}

int main(){

    int a,b;
    cout << "Enter a number (a = ) ";
    cin >> a;
    cout << "Enter another number (b = ) ";
    cin >> b;

    swap(&a, &b);

    cout << "After Swapping...." << endl << "a = " << a << endl << "b = " << b << endl;

    string s = printMe();
    // in any type of assignment operation........... 
    // the LHS is called "Lvalue", it actually gets stored in the memory,
    // the RHS is called "Rvalue", it doesn't get stored in memory, it just get referenced.
    cout << s << endl;

    // using "move semantics"
    string&& ss = printMe(); // this "&&" doesn't store any value, it just make "ss" point to the location of "printMe()".
    cout << ss << endl;


    return 0;
}

void swap(int *a, int *b){
    int temp;
    temp = move(*a); // "move()" semantics in action.
    // this "move()" doesn't copy the value, it moves the value from a variable to another making the variable empty.
    // this doesn't reserve any extra unnecessary spaces.
    *a = move(*b); // "move()" semantics in action.
    // this "move()" doesn't copy the value, it moves the value from a variable to another making the variable empty.
    // this doesn't reserve any extra unnecessary spaces.
    *b = move(temp); // "move()" semantics in action.
    // this "move()" doesn't copy the value, it moves the value from a variable to another making the variable empty.
    // this doesn't reserve any extra unnecessary spaces.
}