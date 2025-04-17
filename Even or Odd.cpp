#include <iostream>

int main() {
    int x {};
    std::cout << "Enter your number here: \n";
    std::cin >> x;
    if (x %2 == 0){
        std::cout << "Your number is even" << std::endl;
    }
    else {
        std::cout << "Your number is odd" << std::endl;
    }

    return 0;
}