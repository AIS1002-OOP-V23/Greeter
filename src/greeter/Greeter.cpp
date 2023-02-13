
#include "greeter/Greeter.hpp"

#include <iostream>

void Greeter::greet() {
    std::cout << "Hello " << name_ << "!" << std::endl;
}
