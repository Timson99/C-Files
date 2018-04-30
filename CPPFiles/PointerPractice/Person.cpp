#include <iostream>
#include <sstream>
#include "Person.h"

string Person::toString() {
    stringstream ss;
    ss << "Name: " + name + "; Age: ";
    ss << age;
    return ss.str();
}