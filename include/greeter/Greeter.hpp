
#ifndef GREETER_GREETER_HPP
#define GREETER_GREETER_HPP

#include <string>
#include <iostream>

class Greeter {

public:
    explicit Greeter(const std::string &name) : name_(name) {}

    void greet() const {
        std::cout << "Hello " << name_ << "!" << std::endl;
    }

private:
    std::string name_;
};

#endif//GREETER_GREETER_HPP
