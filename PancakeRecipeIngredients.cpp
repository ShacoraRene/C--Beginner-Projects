#include <iostream>
#include <cmath>

int main() {
    // We will be creating a simple pancake recipe
    std::cout << "Welcome to the pancake recipe calculator!" << std::endl;
    std::cout << "This program will help you calculate the ingredients needed for pancakes." << std::endl;
    std::cout<< "" << std::endl;
    std::cout<< "How many people are you serving?:" << std::endl;
    int people;
    std::cin >> people;
    
    
    // Base ingredients for 2 people
    int eggs = 1; // 1 egg per two people
    int milk_cups = 1; // 1 cup of milk per two people
    int flour_cups = 1; // 1 cup of flour per two people
    int baking_powder_tsp = 1; // 1 tsp of baking powder per two people
    int sugar_tbs = 2; // 1 tablespoon of sugar per two people
    int vanilla_tsp = 1; // 1 tsp of vanilla extract per two people

    // Calculate ingredients based on the number of people
    float scale = people / 2.0;

    float eggs_required = std::ceil(eggs * scale);
    float milk_cups_required = milk_cups * scale;
    float flour_cups_required = flour_cups * scale;
    float baking_powder_tsp_required = baking_powder_tsp * scale;
    float sugar_tbs_required = sugar_tbs * scale;
    float vanilla_tsp_required = vanilla_tsp * scale;

    // Output the required ingredients
    std::cout << "\nYou'll need:\n";
    std::cout << eggs_required << " eggs\n";
    std::cout << milk_cups_required << " cups of milk\n";
    std::cout << flour_cups_required << " cups of flour\n";
    std::cout << baking_powder_tsp_required << " tsp of baking powder\n";
    std::cout << sugar_tbs_required << " tablespoons of sugar\n";
    std::cout << vanilla_tsp_required << " tsp of vanilla extract\n";

    std::cout<< "" << std::endl;
    std::cout<< "Vanilla and sugar are an option, but maybe worth the flavor." << std::endl;

    
    return 0;
}