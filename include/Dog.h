#pragma once
#include <iostream>
#include <string>

class Dog {
public:
    Dog(int age, int weight, std::string name); // Constructor

    int getAge() const { return m_age; } // Getter for age
    int getWeight() const { return m_weight; } // Getter for weight
    std::string getName() const { return m_name; } // Getter for name

private:
    int m_age; // Member variable for age
    int m_weight; // Member variable for weight
    std::string m_name; // Member variable for name
};

std::ostream& operator<< (std::ostream& os, const Dog& d); // Overload << operator for output

Dog operator-(const Dog& lhs, const Dog& rhs); // Overload - operator for Dog subtraction

bool operator<(const Dog& lhs, const Dog& rhs); // Overload < operator for comparing Dogs based on weight
