#include "Appetizer.hpp"
#include "Dessert.hpp"
#include "MainCourse.hpp"

#include <iostream>
#include <vector>
#include <iomanip>

int main()
{
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
    for (size_t i = 0; i < appetizer.getIngredients().size(); ++i)
    {
        std::cout << appetizer.getIngredients()[i];
        if (i < appetizer.getIngredients().size() - 1) // Check if it's not the last item
        {
            std::cout << ", ";
        }
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
    std::vector<MainCourse::SideDish> side_dishes = {
        {"Mashed Potatoes", MainCourse::Category::STARCHES},
        {"Green Beans", MainCourse::Category::VEGETABLE}};

    // Create a MainCourse object
    MainCourse main_course("Grilled Chicken", ingredients, 30, 18.99, Dish::CuisineType::AMERICAN,
                           MainCourse::CookingMethod::GRILLED, "Chicken", side_dishes, true);

    // Display the main course details
    std::cout << std::endl;
    std::cout << "Dish Name: " << main_course.getName() << std::endl;
    std::cout << "Ingredients: ";
    for (size_t i = 0; i < main_course.getIngredients().size(); ++i)
    {
        std::cout << main_course.getIngredients()[i];
        if (i < main_course.getIngredients().size() - 1) // Check if it's not the last item
        {
            std::cout << ", ";
        }
    }
    std::cout << std::endl;
    std::cout << "Preparation Time: " << main_course.getPrepTime() << " minutes" << std::endl;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Price: $" << main_course.getPrice() << std::endl;
    std::cout << "Cuisine Type: " << main_course.getCuisineType() << std::endl;
    std::cout << "Cooking Method: " << (main_course.getCookingMethod() == MainCourse::CookingMethod::GRILLED ? "GRILLED" : "OTHER") << std::endl;
    std::cout << "Protein Type: " << main_course.getProteinType() << std::endl;
    std::cout << "Side Dishes: ";
    for (size_t i = 0; i < main_course.getSideDishes().size(); ++i)
    {
        auto side_dish = main_course.getSideDishes()[i];
        std::cout << side_dish.name << " ("
                  << (side_dish.category == MainCourse::Category::STARCHES ? "Starches"
                                                                           : (side_dish.category == MainCourse::Category::VEGETABLE ? "Vegetable"
                                                                                                                                    : "Other"))
                  << ")";
        if (i < main_course.getSideDishes().size() - 1)
        {
            std::cout << ", ";
        }
    }
    std::cout << std::endl;
    std::cout << "Gluten-Free: " << (main_course.isGlutenFree() ? "True" : "False") << std::endl;

    main_course.setCookingMethod(MainCourse::CookingMethod::BAKED);
    main_course.setProteinType("Chicken");
    MainCourse::SideDish new_side_dish{"Caesar Salad", MainCourse::Category::VEGETABLE};
    main_course.addSideDish(new_side_dish);
    main_course.setGlutenFree(true);

    // 3. Testing the Dessert class with the parameterized constructor
    std::vector<std::string> dessert_ingredients = {"Flour", "Sugar", "Cocoa Powder", "Eggs"};
    Dessert dessert("Chocolate Cake", dessert_ingredients, 45, 7.99, Dish::CuisineType::FRENCH,
                    Dessert::FlavorProfile::SWEET, 9, false);
    std::cout << std::endl;
    std::cout << "Dish Name: " << dessert.getName() << std::endl;
    std::cout << "Ingredients: ";
    for (size_t i = 0; i < dessert.getIngredients().size(); ++i)
    {
        std::cout << dessert.getIngredients()[i];
        if (i < dessert.getIngredients().size() - 1)
        {
            std::cout << ", ";
        }
    }
    std::cout << std::endl;
    std::cout << "Preparation Time: " << dessert.getPrepTime() << " minutes" << std::endl;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Price: $" << dessert.getPrice() << std::endl;
    std::cout << "Cuisine Type: " << dessert.getCuisineType() << std::endl;
    std::cout << "Flavor Profile: " << (dessert.getFlavorProfile() == Dessert::FlavorProfile::SWEET ? "SWEET" : "OTHER") << std::endl;
    std::cout << "Sweetness Level: " << dessert.getSweetnessLevel() << std::endl;
    std::cout << "Contains Nuts: " << (dessert.containsNuts() ? "True" : "False") << std::endl;

    dessert.setFlavorProfile(Dessert::FlavorProfile::SWEET);
    dessert.setSweetnessLevel(9);
    dessert.setContainsNuts(false);

    return 0;
}
