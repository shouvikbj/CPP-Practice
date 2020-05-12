#include <iostream>
using namespace std;

int main(){

    int *myp;

    try{
        myp = new int[100];
        cout << "Memory space allocated." << endl;
    }
    catch(...){
        cout << "Failed to allocated memory." << endl;
    }
    

    delete [] myp;

    return 0;
}