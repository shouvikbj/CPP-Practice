#include <iostream>
#include <string>

using namespace std;

template <typename T>
// this function is basically an exit strategy.
void fun(T t){
    cout << "fun(T t) printing => " << t << endl;
}

template <typename T, typename... Args>
// when there will be only one parameter left in the "arg...", it will automatically call the above "fun(T t)"
void fun(T t, Args... args){
    cout << "fun(T t, Args... args) printing => " << t << endl;
    fun(args...);
}

int main(){

    string myName = "Shouvik";

    fun(60);
    fun(1,2,3.4,4.5, myName);

    return 0;
}