#include <iostream>
#include <sstream>
#include "Person.h"



int main() {
   
   /* string name = "Bob";
    bool happy = true;
    stringstream ss;
    
    ss << "Name: " + name + "; Happy?: ";
    ss << happy;
    cout << ss.str(); */
    
   Person person1;
   Person person2("Bill");
   Person person3("Rumpus", 101);
   
   cout << person1.toString() << endl;
   cout << person2.toString() << endl;
   cout << person3.toString() << endl;
    
    



    return 0;
}