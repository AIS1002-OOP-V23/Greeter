
#include "greeter/Greeter.hpp"

#include <iostream>

void Greeter::greet() const {
    std::cout << "Hello " << name_ << "!" << std::endl;
}
