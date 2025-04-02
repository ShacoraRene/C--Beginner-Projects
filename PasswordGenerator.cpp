#include <iostream>
#include <string>

int main() {
    
    std::cout << "Welcome to the Password Generator" << std::endl;
    std::cout << "This program will help you create a strong password." << std::endl;
    std::cout << "Please enter the following information:" << std::endl;
    std::cout << std::endl;
    std::string name, season, color;
    std::cout << "What is your name?: ";
    std::cin >> name;
    std::cout << "What is your favorite season of the year?: ";
    std::cin >> season;
    std::cout << "What is your favorite color?: ";
    std::cin >> color;
    std::cout << std::endl;
    std::cout << "Thank you for your input!" << std::endl;
    
    int namelength = name.length();
    int colorLength = color.length();
    char firstLetterSeason = season[0];
    char lastLetterName = name[namelength - 1];
    char secondToLastColor = color[colorLength - 2];
    char lastColor = color[colorLength - 1];

    std::cout << "First letter of your season: " << firstLetterSeason << std::endl;
    std::cout << "Length of your name: " << namelength << std::endl;
    std::cout << "Last letter of your name: " << lastLetterName << std::endl;
    std::cout << "Second to last letter of your color: " << secondToLastColor << std::endl;
    std::cout << "Last letter of your color: " << lastColor << std::endl;
    std::cout << std::endl;

    std::cout << "Your new password is: " << firstLetterSeason << namelength << "@" << lastLetterName << secondToLastColor << lastColor << "!" << std::endl;





    return 0;
}