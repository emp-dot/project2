/**
 * @file Appetizer.cpp
 * @brief This file contains the implementation of the Dish class, which represents a dish in a virtual bistro simulation.
 *
 * The Dish class includes methods to manage and present the details of a dish, including name, ingredients, preparation time, price, and cuisine type.
 * The implementation ensures that the dish name is validated and correctly formatted.
 *
 * @date [09-24-2024]
 * @author [Gideon Boateng]
 */
#include "Appetizer.hpp"

// Default constructor
Appetizer::Appetizer()
    : Dish(), serving_style_(), spiciness_level_(), vegetarian_() {}


Appetizer::Appetizer(const std::string &name, const std::vector<std::string> &ingredients, int prep_time,
                     double price, Dish::CuisineType cuisine_type, ServingStyle serving_style,
                     int spiciness_level, bool vegetarian)
    : Dish(name, ingredients, prep_time, price, cuisine_type),
      serving_style_(serving_style),
      spiciness_level_(spiciness_level),
      vegetarian_(vegetarian)
{
}

// Accessor Functions
Appetizer::ServingStyle Appetizer::getServingStyle() const
{
    return serving_style_;
}

int Appetizer::getSpicinessLevel() const
{
    return spiciness_level_;
}

bool Appetizer::isVegetarian() const
{
    return vegetarian_;
}
// Mutator Functions

void Appetizer::setServingStyle(const Appetizer::ServingStyle &serving_style)
{
    serving_style_ = serving_style;
}

void Appetizer::setSpicinessLevel(const int spiciness_level)
{
    spiciness_level_ = spiciness_level;
}

void Appetizer::setVegetarian(const bool vegetarian)
{
    vegetarian_ = vegetarian;
}
