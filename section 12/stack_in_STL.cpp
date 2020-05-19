#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;


int main(){

    stack<int> mystack;

    mystack.push(10);
    mystack.push(12);
    mystack.push(14);
    mystack.push(16);

    cout << mystack.size() << endl;
    cout << mystack.top() << endl;

    mystack.pop();
    cout << mystack.top() << endl;

    while(!mystack.empty()){
        cout << mystack.top() << " ";
        mystack.pop();
    }
    cout << endl;


    return 0;
}