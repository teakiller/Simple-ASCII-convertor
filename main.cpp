#include <iostream>

int main() {
    //Build 3
    int n;
    std::string exitcmd;
    exitcmd = "exit";
    std::cout << "Simple ASCII Convertor" << std::endl;
    std::cout << "How many times you want to convert?: ";
    std::cin >> n;

    char c;
    do{
        std::cout << "Enter character: ";
        std::cin >> c;
        std::cout << "Its ASCII value is: " << int(c) << std::endl;

        if (std::string(c) = exitcmd) {
            break;
        }


    }while (1 == 1);
    return 0;
}