#include "Appetizer.hpp"
#include "Dessert.hpp"
#include "MainCourse.hpp"

#include <iostream>
#include <vector>
#include <iomanip>

int main()
{
    // 1. Testing the Appetizer class with the default constructor
    Appetizer appetizer;
    appetizer.setName("Bruschetta");
    appetizer.setIngredients({"Tomato", "Basil", "Garlic", "Olive Oil", "Baguette"});
    appetizer.setPrepTime(15);
    appetizer.setPrice(5.50);
    appetizer.setCuisineType(Appetizer::CuisineType::ITALIAN);
    appetizer.setSpicinessLevel(2);
    appetizer.setServingStyle(Appetizer::ServingStyle::FAMILY_STYLE);
    appetizer.setVegetarian(true);

    std::cout << "Dish Name: " << appetizer.getName() << std::endl;
    std::cout << "Ingredients:" << std::endl;
    for (const auto &ingredient : appetizer.getIngredients()) {
        std::cout << "- " << ingredient << std::endl;
    }
    std::cout << "Preparation Time: " << appetizer.getPrepTime() << " minutes" << std::endl;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Price: $" << appetizer.getPrice() << std::endl;
    std::cout << "Cuisine Type: " << appetizer.getCuisineType() << std::endl; // Ensure this is readable
    std::cout << "Spiciness Level: " << appetizer.getSpicinessLevel() << std::endl;
    std::cout << "Vegetarian: " << (appetizer.isVegetarian() ? "True" : "False") << std::endl;

    std::cout << std::endl;
    return 0;
};