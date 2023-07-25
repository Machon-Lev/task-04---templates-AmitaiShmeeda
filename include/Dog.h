#pragma once
#include <iostream>
#include <string>

class Dog {
public:
    Dog(int age, int weight, std::string name);

    int getAge() const { return m_age; }
    int getWeight() const { return m_weight; }
    std::string getName() const { return m_name; }

private:
    int m_age;
    int m_weight;
    std::string m_name;
};

std::ostream& operator<< (std::ostream& os, const Dog& d);

Dog operator-(const Dog& lhs, const Dog& rhs);

bool operator<(const Dog& lhs, const Dog& rhs); // Add this comparison operator