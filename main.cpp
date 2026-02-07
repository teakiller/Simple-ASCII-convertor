#include <iostream>

int main() {
    //Build 1
    int n;
    std::cout << "Simple ASCII Convertor" << std::endl;
    std::cout << "How many times you want to convert?: ";
    std::cin >> n;

    char c;
    for (int i = 0; i < n; i++) {
        std::cout << "Enter character: ";
        std::cin >> c;
        std::cout << "Its ASCII value is: " << int(c) << std::endl;


    }
    return 0;
}