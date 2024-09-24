/**
 * @file Dessert.cpp
 * @brief This file contains the implementation of the Dish class, which represents a dish in a virtual bistro simulation.
 *
 * The Dish class includes methods to manage and present the details of a dish, including name, ingredients, preparation time, price, and cuisine type.
 * The implementation ensures that the dish name is validated and correctly formatted.
 *
 * @date [Insert Date]
 * @author [Gideon Boateng]
 */

#include "Dessert.hpp"
// Default constructor
Dessert::Dessert()
    : Dish(), flavor_profile_(FlavorProfile::SWEET), sweetness_level_(0), contains_nuts_(true) {}

// Parameterized constructor
Dessert::Dessert(const std::string &name, const std::vector<std::string> &ingredients, int prep_time, double price, CuisineType cuisine_type,
                 FlavorProfile flavor_profile, int sweetness_level, bool contains_nuts)
    : Dish(name, ingredients, prep_time, price, cuisine_type), flavor_profile_(flavor_profile), sweetness_level_(sweetness_level), contains_nuts_(contains_nuts) {}

// Accessor Functions
Dessert::FlavorProfile Dessert::getFlavorProfile() const
{
    return flavor_profile_;
}

int Dessert::getSweetnessLevel() const
{
    return sweetness_level_;
}

bool Dessert::containsNuts() const
{
    return contains_nuts_;
}
// Mutator Functions
void Dessert::setFlavorProfile(const Dessert::FlavorProfile &flavor_profile)
{
    flavor_profile_ = flavor_profile;
}

void Dessert::setSweetnessLevel(const int sweetness_level)
{
    sweetness_level_ = sweetness_level;
}

void Dessert::setContainsNuts(const bool contains_nuts)
{
    contains_nuts_ = contains_nuts;
}