
#ifndef GREETER_GREETER_HPP
#define GREETER_GREETER_HPP

#include <string>

class Greeter {

public:
    explicit Greeter(const std::string &name) : name_(name) {}

    void greet() const;

private:
    std::string name_;
};

#endif//GREETER_GREETER_HPP
