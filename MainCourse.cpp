/**
 * @file MainCourse.cpp
 * @brief This file contains the implementation of the MainCourse class, which represents a MainCourse in a virtual bistro simulation.
 *
 * The MainCourse class includes methods to manage and present the details of a MainCourse, including name, ingredients, preparation time, price, and cuisine type.
 * The implementation ensures that the MainCourse name is validated and correctly formatted.
 *
 * @date [Insert Date]
 * @author [Gideon Boateng]
 */

#include "MainCourse.hpp"

// Default Constructor
MainCourse::MainCourse()
    : Dish(), cooking_method_(), protein_type_(), side_dishes_(), gluten_free_() {}

// Parameterized Constructor
MainCourse::MainCourse(const std::string &name, const std::vector<std::string> &ingredients, int prep_time, double price,
                       CuisineType cuisine_type, CookingMethod cooking_method, const std::string protein_type,
                       const std::vector<SideDish> side_dishes, bool gluten_free)
    : Dish(name, ingredients, prep_time, price, cuisine_type),
      cooking_method_(cooking_method),
      protein_type_(protein_type),
      side_dishes_(side_dishes),
      gluten_free_(gluten_free)
{
}

// Accessor Functions
MainCourse::CookingMethod MainCourse::getCookingMethod() const
{
    return cooking_method_;
}

std::string MainCourse::getProteinType() const
{
    return protein_type_;
}

std::vector<MainCourse::SideDish> MainCourse::getSideDishes() const
{
    return side_dishes_;
}

bool MainCourse::isGlutenFree() const
{
    return gluten_free_;
}

// Mutator Functions
void MainCourse::setCookingMethod(const MainCourse::CookingMethod &cooking_method)
{
    cooking_method_ = cooking_method;
}

void MainCourse::setProteinType(const std::string protein_type)
{
    protein_type_ = protein_type;
}

void MainCourse::addSideDish(const MainCourse::SideDish &side_dish)
{
    side_dishes_.push_back(side_dish);
}

void MainCourse::setGlutenFree(const bool gluten_free)
{
    gluten_free_ = gluten_free;
}
