#include <iostream>
#include <algorithm>
#include <deque>

using namespace std;



int main(){

    deque<int> mynums;

    mynums.push_back(10);
    mynums.push_front(20);
    mynums.push_front(30);
    mynums.push_front(40);

    cout << mynums.size() << endl;
    cout << mynums.at(1) << endl;

    mynums.pop_back();

    for(auto n : mynums){
        cout << n << " ";
    }
    cout << endl;


    return 0;
}