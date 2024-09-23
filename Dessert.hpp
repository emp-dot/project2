/**
 * @file Dessert.hpp
 * @brief This file contains the declaration of the Dish class, which represents a dish in a virtual bistro simulation.
 *
 * The Dish class includes attributes such as name, ingredients, preparation time, price, and cuisine type.
 * It provides constructors, accessor and mutator functions, and a display function to manage and present
 * the details of a dish.
 *
 * @date [Insert Date]
 * @author [Gideon Boateng]
 */

#ifndef DESSERT_HPP
#define DESSERT_HPP

#include "Dish.hpp"

class Dessert : public Dish
{
public:
    enum FlavorProfile
    {
        SWEET,
        BITTER,
        SOUR,
        SALTY,
        UMAMI
    };

    /**
     * Default constructor.
     * Initializes all private members with default values.
     */
    Dessert();

    /**
     * Parameterized constructor.
     * @param name The name of the dessert.
     * @param ingredients The ingredients used in the dessert.
     * @param prep_time The preparation time in minutes.
     * @param price The price of the dessert.
     * @param cuisine_type The cuisine type of the dessert.
     * @param flavor_profile The flavor profile of the dessert.
     * @param sweetness_level The sweetness level of the dessert.
     * @param contains_nuts Flag indicating if the dessert contains nuts.
     */
    // Dessert(const std::string &name, const std::vector<std::string> &ingredients, int prep_time, double price, CuisineType cuisine_type,
    //         FlavorProfile flavor_profile, int sweetness_level, bool contains_nuts);


    Dessert(const std::string &name, const std::vector<std::string> &ingredients = {}, int prep_time = 0, double price = 0.0, CuisineType cuisine_type = CuisineType::OTHER,
            FlavorProfile flavor_profile = FlavorProfile::SWEET, int sweetness_level = 0, bool contains_nuts = true);
    // Accessors
    /**
     * @return The flavor profile of the dessert (as an enum).
     */
    FlavorProfile getFlavorProfile() const;

    /**
     * @return The sweetness level of the dessert.
     */
    int getSweetnessLevel() const;

    /**
     * @return True if the dessert contains nuts, false otherwise.
     */
    bool containsNuts() const;

    // Mutators
    /**
     * Sets the flavor profile of the dessert.
     * @param flavor_profile The new flavor profile.
     * @post Sets the private member `flavor_profile_` to the value of the
     parameter.
     */
    void setFlavorProfile(const FlavorProfile &flavor_profile);

    /**
    * Sets the sweetness level of the dessert.
    * @param sweetness_level An integer representing the sweetness level of
    the dessert.
    * @post Sets the private member `sweetness_level_` to the value of the
    parameter.
    */
    void setSweetnessLevel(const int sweetness_level);

    /**
     * * Sets the contains_nuts flag of the dessert.
     * @param contains_nuts A boolean indicating if the dessert contains nuts.
     * @post Sets the private member `contains_nuts_` to the value of the parameter.
     */
    void setContainsNuts(const bool contains_nuts);

private:
    FlavorProfile flavor_profile_;
    int sweetness_level_;
    bool contains_nuts_;
};

#endif