#include <iostream>
#include "CatHeader.h"

using namespace std;

Cat::Cat(string nam) {
    name = nam;
    cout << "Cat " + name + " created" << endl;
    happy = true;  
}

Cat::~Cat() {
    happy = false;
    speak();
}

void Cat::speak() {
    
    if( happy ) {
        cout << name + " says Meow" << endl;
    } else {
        cout << name + " says Ssssssss" << endl;
    }
}

bool Cat::getHappy() {
    return happy;
}
void Cat::setHappy(bool happiness)  {
    happy = happiness;
}