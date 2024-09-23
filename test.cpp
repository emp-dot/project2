#include "Appetizer.hpp"
#include "Dessert.hpp"
#include "MainCourse.hpp"

#include <iostream>
#include <vector>
#include <iomanip>

int main() {
    // Test 1: Instantiate an Appetizer using the default constructor
    Appetizer appetizer;
    appetizer.setName("UNKNOWN");
    appetizer.setIngredients({});
    appetizer.setPrepTime(0);
    appetizer.setPrice(0.00);
    appetizer.setCuisineType(Dish::CuisineType::OTHER);
    appetizer.setSpicinessLevel(7);
    appetizer.setServingStyle(Appetizer::ServingStyle::FAMILY_STYLE);
    appetizer.setVegetarian(true);
    std::cout << "Dish Name: " << appetizer.getName() << std::endl;
    std::cout << "Ingredients: ";
    for (const auto& ingredient : appetizer.getIngredients()) {
        std::cout << ingredient << " ";
    }
    std::cout << std::endl;
    std::cout << "Preparation Time: " << appetizer.getPrepTime() << " minutes" << std::endl;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Price: $" << appetizer.getPrice() << std::endl;
    std::cout << "Cuisine Type: " << appetizer.getCuisineType() << std::endl;
    std::cout << "Spiciness Level: " << appetizer.getSpicinessLevel() << std::endl;
    std::cout << "Serving Style: " << (appetizer.getServingStyle() == Appetizer::ServingStyle::FAMILY_STYLE ? "FAMILY_STYLE" : "OTHER") << std::endl;
    std::cout << "Vegetarian: " << (appetizer.isVegetarian() ? "True" : "False") << std::endl;

    // Test 2: Instantiate a MainCourse using the parameterized constructor
    std::vector<std::string> ingredients = {"Chicken", "Olive Oil", "Garlic", "Rosemary"};
    std::vector<std::string> side_dishes = {"Mashed Potatoes", "Green Beans"};
    // MainCourse mainCourse("Grilled Chicken", {"Chicken", "Olive Oil", "Garlic", "Rosemary"}, 30, 18.99,
    //                       MainCourse::CuisineType::AMERICAN, MainCourse::CookingMethod::GRILLED, "Chicken");
    // MainCourse main_course("Grilled Chicken", ingredients, 30, 18.99, MainCourse::CuisineType::AMERICAN,
    //                        MainCourse::CookingMethod::GRILLED, side_dishes, true);

    // std::cout << "\nMain Course Info:" << std::endl;
    // std::cout << "Dish Name: " << main_course.getName() << std::endl;
    // std::cout << "Ingredients: ";
    // for (const auto& ingredient : main_course.getIngredients()) {
    //     std::cout << ingredient << " ";
    // }
    // std::cout << std::endl;
    // std::cout << "Preparation Time: " << main_course.getPrepTime() << " minutes" << std::endl;
    // std::cout << "Price: $" << main_course.getPrice() << std::endl;
    // std::cout << "Cuisine Type: " << main_course.getCuisineType() << std::endl;
    // std::cout << "Cooking Method: " << (main_course.getCookingMethod() == MainCourse::CookingMethod::GRILLED ? "GRILLED" : "OTHER") << std::endl;
    // std::cout << "Protein Type: " << main_course.getProteinType() << std::endl;
    // std::cout << "Side Dishes: ";
    // for (const auto& side_dish : main_course.getSideDishes()) {
    //     std::cout << side_dish << " ";
    // }
    std::cout << std::endl;
    // std::cout << "Gluten-Free: " << (main_course.isGlutenFree() ? "True" : "False") << std::endl;

    // Test 3: Instantiate a Dessert using the parameterized constructor
    std::vector<std::string> dessert_ingredients = {"Flour", "Sugar", "Cocoa Powder", "Eggs"};
    // Dessert dessert("Chocolate Cake", dessert_ingredients, 45, 7.99, "FRENCH", Dessert::FlavorProfile::SWEET, 9, false);

    // std::cout << "\nDessert Info:" << std::endl;
    // std::cout << "Dish Name: " << dessert.getName() << std::endl;
    // std::cout << "Ingredients: ";
    // for (const auto& ingredient : dessert.getIngredients()) {
    //     std::cout << ingredient << " ";
    // }
    // std::cout << std::endl;
    // std::cout << "Preparation Time: " << dessert.getPrepTime() << " minutes" << std::endl;
    // std::cout << "Price: $" << dessert.getPrice() << std::endl;
    // std::cout << "Cuisine Type: " << dessert.getCuisineType() << std::endl;
    // std::cout << "Flavor Profile: " << (dessert.getFlavorProfile() == Dessert::FlavorProfile::SWEET ? "SWEET" : "OTHER") << std::endl;
    // std::cout << "Sweetness Level: " << dessert.getSweetnessLevel() << std::endl;
    // std::cout << "Contains Nuts: " << (dessert.containsNuts() ? "True" : "False") << std::endl;

    return 0;
}
