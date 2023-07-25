#include "Dog.h"

Dog::Dog(int age, int weight, std::string name) :
    m_age(age), m_weight(weight), m_name(name) {}

std::ostream& operator<< (std::ostream& os, const Dog& d) {
    return os << "name = " << d.getName() << " age = " << d.getAge() << ", weight = " << d.getWeight();
}

Dog operator-(const Dog& lhs, const Dog& rhs) {
    return Dog(lhs.getAge(), (lhs.getWeight() - rhs.getWeight()), lhs.getName());
}

bool operator<(const Dog& lhs, const Dog& rhs) {
    return lhs.getWeight() < rhs.getWeight();
}
