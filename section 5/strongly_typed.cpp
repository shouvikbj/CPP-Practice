#include <iostream>
#include <string>
using namespace std;

string api_call(){
    return "We got some data from web\n";
}

int another_api_call(){
    return 5;
}

int main(){

    auto response = api_call(); // auto is not a keyword. it automatically assigns the type of the variable on the go.
    auto resp = another_api_call();
    
    cout << "API call value : " << response;
    cout << "API call value : " << resp << endl;

    if(typeid(response) == typeid(string)){
        puts("Type of both ID is string.");
    }

    if(typeid(response) == typeid(string)){
        puts("Type of both ID is int.");
    }

    return 0;
}