#include <iostream>
using namespace std;

enum MsOffice {
    // BOLD = 5,
    BOLD,
    ITALICS,
    UNDERLINE,
    CROSSED
};

//// the below code will make the enum variables to be of a particular type..
// enum MsOffice: uint8_t {
//     BOLD,
//     ITALICS,
//     UNDERLINE,
//     CROSSED
// };

int main(){

    int myAttribute = BOLD;
    cout << myAttribute << endl;
    myAttribute = ITALICS;
    cout << myAttribute << endl;
    myAttribute = UNDERLINE;
    cout << myAttribute << endl;
    myAttribute = CROSSED;
    cout << myAttribute << endl;

    return 0;
}