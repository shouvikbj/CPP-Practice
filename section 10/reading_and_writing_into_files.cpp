#include <iostream>
#include <string>

constexpr int maxbuffer = 1024;

using namespace std;



int main(){

    const char * filename = "mythisfile.txt";
    const char * information = "Hi, I am Shouvik Bajpayee. ";

    //// in "write" mode the new incoming data will always overwrite the existing file data.
    FILE * fh = fopen(filename, "w");
    //// in "append" mode, new data will be entered/appended into the file after the existing data.
    FILE * fh = fopen(filename, "a");

    for(int i=0; i<20; ++i){
        fputs(information, fh);
    }

    fclose(fh);


    // reading the file
    char buf[maxbuffer];

    //// in "read" mode, the data of the file will be read character by character.
    FILE * fh  = fopen(filename, "r");

    while(fgets(buf, maxbuffer, fh)){
        fputs(buf, stdout);
    }


    return 0;
}