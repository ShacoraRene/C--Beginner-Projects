#include <iostream>
#include <string>

int main() {
    std::string name;
    std::cout << "Hello! What is your name? ";
    std::cin >> name;
    std::cout << "Hello, " << name << "! Welcome to the Mini Math Bot!" << std::endl;

    int enter_number1 = 0;
    int enter_number2 = 0;

    std::cout << "Enter the first number: ";
    std::cin >> enter_number1;
    std::cout << "Enter the second number: ";
    std::cin >> enter_number2;
    
    std::cout << "The sum of the two numbers is: " << enter_number1 + enter_number2 << std::endl;
    std::cout << "The difference of the two numbers is: " << enter_number1 - enter_number2 << std::endl;
    std::cout << "The product of the two numbers is: " << enter_number1 * enter_number2 << std::endl;
    std::cout << "The quotient of the two numbers is: " << enter_number1 / enter_number2 << std::endl;
    std::cout << "The remainder of the two numbers is: " << enter_number1 % enter_number2 << std::endl;
     
    
    return 0;
}