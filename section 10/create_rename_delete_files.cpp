#include <iostream>
#include <string>

using namespace std;



int main(){

    static const char * originalFile = "originalFile.txt";
    static const char * editedFile = "editedFile.txt";

    //// in "write mode ("w")", if the file doesn't exist, it will automatically be created.
    FILE * fh = fopen(originalFile, "w");
    cout << "file created." << endl;
    fclose(fh);

    //// renaming a file
    rename(originalFile, editedFile);
    cout << "file renamed." << endl;

    //// removing the file
    remove(editedFile);
    cout << "file deleted." << endl;

    return 0;
}