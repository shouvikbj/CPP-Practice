#include <iostream>
#include <string>
using namespace std;

class Rectangle{
    double _length;
    double _breadth;
    public:
        Rectangle(double length=2.0, double breadth=2.0){
            _length = length;
            _breadth = breadth;
        }

        double Area(){
            return (_length*_breadth);
        }

        int compare(Rectangle rectangle){
            return (this->Area() > rectangle.Area()); // here "this -> Area()" is a weird syntax of this keyword.
        }
};

int main(){

    Rectangle h1(3.0, 3.0);
    Rectangle h2(4.0, 4.0);

    cout << h1.compare(h2) << endl;

    if(h1.compare(h2)){
        cout << "h2 is smaller." << endl;
    }
    else{
        cout << "h2 is bigger." << endl;
    }

    return 0;
}