#include <iostream>
#include <string>
using namespace std;

int main(){
    string first_name, last_name;
    cout << "Enter your firstname : ";
    getline(cin, first_name);
    cout << "Enter your lastname : ";
    getline(cin, last_name);
    cout << "Hi " << first_name << " " << last_name << endl;

    return 0;
}

