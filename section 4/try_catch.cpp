#include <iostream>
using namespace std;

int main(){

    // float call_api = 2.0;
    // int call_api = 2;
    // double call_api = 2.0;
    char call_api = 's';


    try{
        cout << "trying to use API value." << endl;
        cout << "did some testing with API value." << endl;
        throw call_api;
        cout << "code after throw." << endl;
    }
    catch(int x){
        cout << "integer exception handled." << endl;
    }
    catch(float x){
        cout << "float exception handled." << endl;
    }
    catch(...){
        cout << "something went wrong. \n";
    }
    
    cout << "keep on moving with rest of the code." << endl;

    return 0;
}