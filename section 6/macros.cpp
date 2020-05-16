#include <iostream>
#include <string>
#include "macroHeader.h";


//// these macros are being defined in a separate header file named "macroHeader.h"
// #define END return 0
// #define ENDMESSAGE cout << "Ending the program.." << endl

// #define MY_INT int32_t

// #define LOG(a) cout << a << endl

using namespace std;
int main(){

    puts("it works.");

    MY_INT a = 12;
    // cout << a << endl; // replacing this line by using the MACRO "LOG()"
    LOG(a);

    MY_INT score = 400;
    LOG(score);

    string name = "Shouvik Bajpayee";
    LOG(name);

    ENDMESSAGE;
    END;
}