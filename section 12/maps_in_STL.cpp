#include <iostream>
#include <algorithm>
#include <map>
#include <string>

using namespace std;


int main(){

    map<string, string> languages;

    languages["py"] = "python";
    languages["cpp"] = "C Plus Plus";
    languages["js"] = "JavaScript";
    languages["rb"] = "Ruby";
    languages["rb"] = "Ruby-One";

    languages.insert(make_pair("pl", "perl"));

    for(auto &val : languages){
        cout << val.first << " : " << val.second << endl;
    }


    return 0;
}