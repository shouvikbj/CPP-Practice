#include <iostream>
// using namespace std;

int factorial(int a){
    if(a > 1){
        return (a * factorial(a-1));
    }
    else{
        return 1;
    }
}

int main(){

    int n;
    std::cout << "Enter a value : ";
    std::cin >> n;
    
    if(n >= 0){
        std::cout << factorial(n) << std::endl;
    }
    else{
        std::cout << "Factorial of -ve number is not possible." << std::endl;
    }

    return 0;
}