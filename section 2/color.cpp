#include <iostream>
#include <string>
using namespace std;

int main(){
    // int number = 0;
    // cout << "Enter a number : ";
    // cin >> number;
    // printf("Your Id is : %d \n", (number + 3));

    string my_color = "";
    cout << "Enter your favourite color : ";
    getline(cin, my_color);
    cout << "Hey " << my_color << " is my favourite color too.\n";

    return 0;
}

