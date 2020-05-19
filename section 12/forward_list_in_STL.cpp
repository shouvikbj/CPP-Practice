#include <iostream>
#include <algorithm>
#include <forward_list>

using namespace std;


int main(){

    forward_list<int> flist1;
    forward_list<int> flist2;

    flist1.assign({1,2,3});
    flist2.assign(5, 15);

    cout << "flist1 elements : " << endl;
    for(int &a : flist1){
        cout << a << " ";
    }
    cout << endl;

    cout << "flist2 elements : " << endl;
    for(int &b : flist2){
        cout << b << " ";
    }
    cout << endl;

    return 0;
}