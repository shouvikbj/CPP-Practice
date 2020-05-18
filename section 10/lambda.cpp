#include <iostream>
#include <string>

using namespace std;



int main(){

    []{
        cout << "https://shouvikbajpayee.pythonanywhere.com" << endl;    
    }();

    // [](){
    //     return 100;
    // };
    // the above suntax won't throw any error. it is commented out, because it is not needed.

    auto sum = [](auto a, auto b){
        return a+b;
    };

    cout << "Sum of two 2 & 5 is : " << sum(2,5) << endl;
    cout << "Sum of two 2.7 & 5.5 is : " << sum(2.7,5.5) << endl;

    string a = "abc";
    string b = "def";

    cout << sum(a, b) << endl;

    return 0;
}