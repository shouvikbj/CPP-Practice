#include <iostream>
using namespace std;

int main(){
    int score = 200;
    int *myp = &score;
    cout << "Value of score is : " << score << endl;
    cout << "Value of the pointer is : " << myp << endl;
    cout << "Value pointed by the pointer is : " << *myp << endl;

    int &another_score = score; // any change to the reference of the variable, will reflect to the actual variable
    another_score = 800;

    cout << "Value of score is : " << score << endl;
    cout << "Value of the pointer is : " << myp << endl;


    return 0;
}